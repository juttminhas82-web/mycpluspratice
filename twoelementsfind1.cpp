#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>nums ={1,1,2,2,3,3,4};
    int n = nums.size();
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum ^ nums[i] ;
    }
    cout<<"The value is : "<<sum;
    return 0;
}