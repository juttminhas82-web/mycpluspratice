#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if((num>>31)&1){
        cout<<"The number is negative ";
    }
    else{
        cout<<"The number is positive ";
    }
    return 0;
}