#include<iostream>
#include<climits>
using namespace std; 
int main(){
    int arr [ ]={3,4,5,6,7};
    int sz = 5;
    int minn = INT_MAX;
    for(int start = 0 ; start <sz;start++){
        int mins = 0;
        for(int end = start;end<sz;end++){
            mins = mins + arr[end];
           minn =min(minn,mins);
        }
    }
    cout<<"The minum sum is : "<<minn;
}