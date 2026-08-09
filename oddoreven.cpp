#include<iostream>
using namespace std;
int main(){
     int num;
    do{
    cout<<"enter the no : ";
    cin>>num;
    if(num!=0){
 cout<<(num%2==0 ? "the num is even ":"the num is odd");
    }
    else
    cout<<"enter the other num 0 is not even or odd";
    cout<<endl;
}while( num==0);
    return 0;
}