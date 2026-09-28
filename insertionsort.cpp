#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> nums = {23,45,64,63,74,73};
    int sz = nums.size();
    for(int i = 1;i<sz;i++){
        int count = i;
        for(int j = count;j>0;j--){
            if(nums[j]<nums[j-1]){
                swap(nums[j],nums[j-1]);
            }
        }
    }
    for(int i=0;i<sz;i++){
        cout<<" "<<nums[i];
    }
    return 0;
}