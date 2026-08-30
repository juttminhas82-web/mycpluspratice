#include<iostream>
using namespace std;
int main(){
   int index = 1;
    int arr[5]={26,45,5,20,23};
    for(int i = 0; i<5;i++){
        for(int j = i+1;j<5;j++)
        if(arr[j]==arr[i]){
           index = 0;
           break;
        }
    }
    if(index==0){
        cout<<"there are arry that are equal ";
    }
    else {
        cout<<"Found nothing are equal ";
    }
   return 0;
}