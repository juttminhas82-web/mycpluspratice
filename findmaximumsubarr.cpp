#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int sz = 6;
    int maxs = INT_MIN;
    for (int start = 0 ; start <sz;start++){
        int curs = 0;
            for (int end = start;end<sz;end++){
                curs = curs + arr[end];
                maxs = max(curs,maxs);
            }
    }
    cout<<"The max value is : "<<maxs;
    return 0;
}