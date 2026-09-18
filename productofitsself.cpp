#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> vec = {1,2,3,4};
    vector<int> ans(vec.size(), 1);
    for(int i = 0;i<vec.size();i++){
        for(int j = 0 ; j<vec.size();j++){
            if(i!=j){
                ans[i] = ans[i] * vec[j];
            }
        }
    }
    for(int k = 0; k<vec.size();k++){
        cout<<" "<<ans[k];
    }
    return 0;
}