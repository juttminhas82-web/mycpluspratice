#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector <int> vec ={1,2,3,4,5};
    int n = vec.size();
    int suffix = 1;
    vector<int> ans(n,1);
    for(int i = 1;i<n;i++){
        ans[i]=ans[i-1]*vec[i-1];
    }
    for(int j = n-2;j>=0;j--){
        suffix = suffix * vec[j+1];
        ans[j] = ans[j] * suffix;
    }
    for(int i = 0;i<n;i++){
        cout<<" "<<ans[i];
    }
    return 0;
}
