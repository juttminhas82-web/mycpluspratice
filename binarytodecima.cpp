#include<iostream>
using namespace std;
int main(){
    int n;
    int ans =0;
    int power = 1;
    cout<<"Enter the binary number : ";
    cin>>n;
    while (n>0){ 
        int remender = n%10;
        ans += remender*power;
        n=n/10;
        power = power * 2;
    }
    cout<<"The ans is "<<ans;
    return 0;
}