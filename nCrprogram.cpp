#include<iostream>
using namespace std;
int factorial(int v){
    int fact = 1;
    for(int i=1;i<=v;i++ ){
       fact = fact *i;
    }
    return fact;
}
int ncr(int n, int r ){
    int factofn = factorial(n);
    int factofr = factorial(r);
    int factrolnr=factorial(n-r);
    return factofn/(factofr*factrolnr);

}
int main(){
    int n;
    int r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"\nEnter the value of r : ";
    cin>>r;
    cout<<"the value is "<<ncr(n,r);
    return 0;

}