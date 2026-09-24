#include<iostream>
using namespace std;
int main(){
    int a = 9;
    int *p= &a;
    cout<<"The value of a is : "<<a;
    cout<<"\nThe address of the variable is "<<&a;
    cout<<"\nThe value store at the pointer p is "<<p;
    cout<<"\nThe address in p is : "<<*p;
    cout<<"\n The address of p is "<<&p;
    int **r =&p;
    cout<<"\nThe value at next pointer  is "<<r;
     **r=50;
     cout<<"\nThe value is change now the value is : "<<a;
     cout<<"\nThe other way to do that thing is "<<*(&a);
     cout<<"\nIf we want to know which value store at the "<<*(*(r));
    return 0;
}