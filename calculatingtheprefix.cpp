#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vrc = {1,2,3,4};
    int n = vrc.size();
    int suffix = 1;
    vector <int > ans (n,1);
    for(int i = 1 ; i<n;i++){
        ans[i] = ans[i-1]* vrc[i-1];
    }
    for(int j = n-2;j>=0;j--){
        suffix = suffix * vrc[j+1];
        ans[j] = ans[j] * suffix ;
    }
    for(int i = 0;i<n;i++){
        cout<<" "<<ans[i];
    }
    return 0;
}
