#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr [ ]= {1,2,4,5,-23,7,-3};
    int sz = 7;
    int maxx = INT_MIN;
    int curs = 0;
    for(int i = 0;i<sz;i++){
        curs = curs + arr[i];
        maxx = max(maxx,curs);
        if(curs<0){
            curs = 0;
        }
    }
    cout<<"The max sum is = "<<maxx;
}