#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> nums = {1,1,2,2,3,4,4,5,5,6,6};
    int start = 0;
    int n = nums.size()-1;
    int end = n;
    if(n==1){
        return 0;
    }
    if(nums[0]!=nums[1]){
            cout<<"The unique element is "<<nums[0];
            return 0;
        }
        if(nums[n]!=nums[n-1]){
            cout<<"The answer is "<<nums[n];
            return 0;
        }
    while(start<=end){
        int mid = start + (end - start)/2;
      if(nums[mid-1]!=nums[mid]&&nums[mid]!=nums[mid+1]){
        cout<<"The single element is : "<<nums[mid];
        break;
      }
      if (mid%2==0){
        if(nums[mid+1]==nums[mid])
        start = mid + 1 ;
        else{
            end = mid - 1;
        }
      }
      else{
         if(nums[mid-1]==nums[mid])
          start = mid + 1 ;
        else{
          end = mid - 1;
        }
       
      }
    
    }
    return 0;
}