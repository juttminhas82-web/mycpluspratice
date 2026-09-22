#include <iostream>
using namespace std;
int returnoctal(int ans){
    int octal = 0;
    int power = 1;
    if(ans>=8){
    while(ans>0){
    int remenders = ans %8;
    octal += remenders*power;
    ans = ans/8;
    power = power *10;
    }
    return octal;
}
else{
    return ans;
}
}
int main() {
    int n;
    int power = 1;
    int ans =0;
    cout<<"Enter the number : ";
    cin>>n;
    while(n>0){
        int remender = n%10;
        ans += remender * power;
        n = n/10;
        power = power *2;
    }
    cout<<"The answer is "<<returnoctal(ans);
    return 0;
}