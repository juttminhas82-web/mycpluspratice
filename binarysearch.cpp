#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4,5,6,7,8,9};
    int size = vec.size()-1;
    int i = 0;
    int target = 8;
    while(i<=size){
        int mid = i + (size-i)/2;
        if(vec[mid]<target){
           i = mid + 1;
        }
        else if(vec[mid]>target){
           size = mid -1;
        }
        else{
            cout<<"The target find in the index = "<<mid;
            break;
        }

    }
    return 0;
}