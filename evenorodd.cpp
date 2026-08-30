#include<iostream> 
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(num&1){
        cout<<"The number is odd ";

    }
    else {
        cout<<"The number is Even ";
    }
    return 0;
}