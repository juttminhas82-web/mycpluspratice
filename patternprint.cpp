#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the pattern you want to print : ";
    cin>>a;
    for(int i=a;i>=0;i--){
        for(int j=0;j<=i;j++){
           cout<<char(j+65);

        }
        cout<<"\n";
    }
    cout<<(a<=10? "the no is not big bro ":"  big bro ");
    return 0;
}