#include<iostream>
using namespace std;
int main(){
    int choice;
    int num;
   
    cout<<"Enter the value : ";
    cin>>num;
    cout<<"-----Menu--------\n1.decimal to binary\n2.decimal to octal\nenter the num ";
    cin>>choice;
    if(choice==1){
         int power=1;
    int  ans=0;
        while(num>0){
        int remender = num%2;
        num = num /2;
        ans += remender * power;
        power = power * 10;
    }
    cout<<"The answer is "<<ans;
    return 0;

    }
    else if(choice==2){
         int power=1;
    double ans=0;

  while(num>0){
        int remender = num % 8;
        num = num /8;
        ans += remender * power;
        power = power * 10;
    }
    cout<<"The answer is "<<ans;
    return 0;

    }
    else{
        cout<<"enter from menu bro";
        return 0;
    }
    
}