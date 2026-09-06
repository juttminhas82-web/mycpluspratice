#include<iostream>
#include<climits>
using namespace std; 
int main(){
    int arr [] = { 2,4,1,5,3};
    int sz = 5;
    int maxz= INT_MIN;
    for(int srt= 0;srt<sz;srt++){
        int curs = 0;
        for(int end =srt;end<sz;end++){
            curs = curs + arr[end];
             maxz = max(maxz,curs);
        }
    }
    cout<<"The max is = "<<maxz;
}