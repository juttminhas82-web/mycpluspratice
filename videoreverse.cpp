#include<iostream>
using namespace std;
int reverse(int n){
    int sum = 0;
    int store = 0;
    while(n!=0){
        sum = n%10;
        n = n/10;
        store = store * 10 + sum;
    }
    return store;

}
int main(){
    int n; 
    cout<<"Enter the value : ";
    cin>>n;
    cout<<"The reverse value is : "<<reverse(n);
    return 0;
}