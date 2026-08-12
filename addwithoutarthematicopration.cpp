#include<iostream>
using namespace std;
int main(){
    int a; 
    int b;
    cout<<"The first no : ";
    cin>>a;
    cout<<"the second no : ";
    cin>>b;
    while(b!=0){
        int carry = a & b;
        a= a ^b;
        b = carry<<1;
    }
cout<<"the sum is = "  <<a;
return 0;
}