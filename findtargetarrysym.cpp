#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums = {1,2,3,4,5};
    int n = nums.size();
    int iindex = 0;
    int jindex=0;
    int target = 7;
    int begin = 0;
    int end = n-1;
    while(begin<end){
        int sum =nums[begin] + nums[end];
        if(sum<target){
            begin++;
        }
        else if(sum>target){
            end--;
        }
        else{
            jindex=end;
            iindex=begin;
            break;
        }
    }
    cout<<"The index  are "<<iindex<<" "<<jindex<<"\n";
    cout<<"The values  are "<<nums[iindex]<<" "<<nums[jindex]<<"\n";

    return 0;
}