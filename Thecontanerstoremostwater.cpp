#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {2,3,5,7,3,6,9,6,8,9,4};
    int maxwater = 0;
    int ans = 0;
    int left = 0;
    int right = vec.size() - 1;
    while(left<right){
        int hight = right - left;
        int width = min(vec[left],vec[right]);
        ans = hight * width;
        maxwater = max(maxwater,ans);
        vec[left]<vec[right]?left++:right--;

    }
    cout<<"The Max water the container store is : "<<maxwater;
    return 0;
}