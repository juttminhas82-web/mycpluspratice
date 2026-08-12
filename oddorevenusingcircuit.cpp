#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the no : ";
    cin>>num;
    cout<<(num & 1 ? "odd" : "even");
}