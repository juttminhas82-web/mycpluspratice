#include<iostream>
using namespace std;
int main(){
    int num;
    int power=1;
    int store=0;
    cout<<"enter the value of n : ";
    cin>>num;
    while(num>0){
        int remender=num%2;
        num = num /2;
        store += remender*power;
        power=power*10;
    }
    cout<<"The binary is : "<<store;
    return 0;

}