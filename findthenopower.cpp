#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    int power;
    cout<<"Enter the value : ";
    cin>>num;
    cout<<"Enter the power : ";
    cin>>power;
    int answer = 1;
    while(power>0){
        if(power%2==1){
            answer = answer * num;
        }
        num = num * num;
        power = power / 2;
    }
    cout<<"The answer is : "<<answer;
    return 0;
}