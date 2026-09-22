#include <iostream>
#include <vector>
#include<cmath>
using namespace std;


int main() {
    int n;
    int power = 0;
    int ans = 0;
    cout<<"Enter the binary number : ";
    cin>>n;
    while(n>0){
        int remender = n%10;
     ans += remender * pow(2,power);
        n = n/10;
        power++;
     
    }
    cout<<"The answer is : "<< ans;
    return 0;
}