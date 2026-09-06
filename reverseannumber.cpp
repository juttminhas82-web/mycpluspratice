#include<iostream>
#include<climits>
using namespace std;
int reverce(int n){
    int sum=0;
    int store = 0;
    while(n!=0){
        sum = n % 10;
         n = n / 10 ;
         store = store * 10 +  sum ;
    }
    return store;
}
int main(){
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    cout<<"The reverse is : "<<reverce(n);
}