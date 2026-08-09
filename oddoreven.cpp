#include<iostream>
using namespace std;
int main(){
     int num;
    do{
    cout<<"enter the no : ";
    cin>>num;
    if(num!=0){
 cout<<(num%2==0 ? "the num is even ":"the num is odd ");
 cout<<(num>0 ?"and no is postive ":"and no is negative ");
    }
    else
    cout<<"enter the other num 0 is not even or odd";
    cout<<endl;
}while( num==0);
    return 0;
}