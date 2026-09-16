#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    int n;
    cout<<"Enter the value : ";
    cin>>x;
    cout<<"Enter the power : ";
    cin>>n;
    int answer = 1;
    while(n>0){
        if(n%2==1){
            answer = answer * x;
        }
        x = x*x;
        n = n/2;
    }
    cout<<"The answer is : "<<answer;
    return 0;
}