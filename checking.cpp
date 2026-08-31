#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    while(b!=0){
        int carry = a & b;
        a = a ^ b; 
        b = carry<<1;
    }
    cout<<"The answer is : "<<a;
}