#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {2,3,5,6,7,8,9,7,8};
    int maxwater = 0;
    int ans = 0 ;
    int left = 0;
    int right = vec.size()-1;
    while(left<right){
        int width = right - left;
        int hight = min(vec[left],vec[right]);
        ans = hight * width;
         maxwater = max(maxwater,ans);
         vec[left]<vec[right] ? left ++:right -- ; 
    }
    cout<<"The max water can be stoore in this are : "<<maxwater;

    return 0;
}