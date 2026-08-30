#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
   if (n > 0 && (n & (n - 1)) == 0){
    cout<<"The number is the power of 2 ";
   }
else{
    cout<<"the number is not the power of two ";
}
}