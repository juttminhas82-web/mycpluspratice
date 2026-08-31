#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> vec = {2,2,5,3,3};
    int ans = 0;
    for(int i : vec){
        ans = ans ^ i;
    }
    cout<<"The not repeat value is : "<<ans;

}