#include <iostream>
using namespace std;

int main() {
    int arry[] ={3,4,5,6,7,8,9,10};
    int target =0;
    int start = 0;
    int end = 7;
    int targetindex;
    cout<<"Enter the target value : ";
    cin>>target;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arry[mid]<target){
            start = mid +1;
        }
        else if(arry[mid]>target){
            end = mid - 1;
        
        }
        else if(arry[mid]==target){
            cout<<"The target is found ";
            targetindex = mid;
            cout<<"The target index is : " <<targetindex;
            break;
        
        }
        else {
            cout<<"The target not found";
            break;
        }
    }
    return 0;
}