#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> nums = {0,3,5,8,9,6,2,1};
    int start = 1;
    int end = nums.size() - 2;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(nums[mid-1]<nums[mid]&&nums[mid]>nums[mid+1]){
            cout<<"The peak is "<<nums[mid];
        }
        if(nums[mid-1]<nums[mid]){
            start = mid + 1;
        }
        else {
             end = mid - 1 ;
        }
    }
    return 0;
}