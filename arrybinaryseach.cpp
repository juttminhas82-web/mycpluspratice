#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    int sz = vec.size() - 1;
    int target = 3;
    int startindex = 0;
    int endindex = sz;
    while(startindex<=endindex){
        int mid = startindex + (endindex - startindex)/2;
        if(vec[mid]<target){
            startindex = mid +1;
        }
        else if(vec[mid]>target){
            endindex = mid - 1;
        }
        else if(vec[mid]==target){
            cout<<"The target is found  index is : "<<mid;
            break;
        }
        else{
            cout<<"The target not found ";
            break;
        }

    }
    return 0;
}