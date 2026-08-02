#include<iostream> 
using namespace std;
int main(){
    int c;
    cout<<"enter the no: ";
    cin>>c;
    bool isprime=true;
    for(int i=2;i<=c-1;i++){
         if(c%i==0){
            isprime=false;
            break;
         }
    }
    if(isprime==true){
        cout<<"the number is prime ";
    }else
    cout<<"the no is not prime ";
    return 0;
}