#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr ={7,8,9,0,1,2,3,4,5,6};
    int tar = 4;
    int st = 0;
    int end = arr.size() - 1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(arr[mid]==tar){
            cout<<"The answer is at " <<mid<<" index";
            break;
        }
        if(arr[st]<=arr[mid]){
            if(arr[st]<=tar&& tar<arr[mid]){
                end = mid - 1;
            }
            else{
                st = mid + 1 ;
            }
        }
        else{
            if(arr[mid]<tar && tar<=arr[end]){
                st = mid + 1;
            }
            else {
                end = mid - 1 ;
            }
        }
    }

    return 0;
}