#include<iostream>
#include<vector>
using namespace std; 
int main(){
    vector <int> nums = {1,2,4,3,1,1,2,2,2,2};
    int n = nums.size();
    int feq = 0;
    int ans = 0;
    for(int i = 0;i<n;i++){
        if(feq==0){
            ans = nums[i];
        }
        if(ans==nums[i]){
           feq++;
        }
        else{
            feq--;
        }
    }
 cout<<"The majority element is : "<<ans;
 return 0;

}