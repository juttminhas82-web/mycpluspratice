#include<iostream>
using namespace std;
int didgitsum(int n){
     int digitsum=0;
    int lastdigit;
    while(n>0){
    lastdigit=n%10;
    n=n/10;
    digitsum+=lastdigit;
 }
 return digitsum;
}
int main(){
   
    int num;
    cout<<"Enter the num : ";
    cin>>num;
 
 cout<<"The digit sum are : "<<didgitsum(num);
 return 0;

}