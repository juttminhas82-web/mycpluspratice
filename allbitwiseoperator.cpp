#include<iostream>
using namespace std;
int main(){
    int a,b;
    int choice;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    do{
    cout<<"\n-----Menu--------\n1.bitand,\n2.bitor\n3.bitwise\n4.exit";
    cout<<" \nEnter your choice : ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"So the bit and change the value into : "<<(a&b);
        break;
        case 2:
        cout<<"the bit or change the value into : "<<(a|b);
        break;
        case 3:
        cout<<"the bit wise change the value in : "<<(a^b);
        break;
        case 4:
        cout<<"Thanks for using the program : ";
        break;
        default:
        cout<<"enter from the menu : ";
        break;
    }
}while(choice!=4);
}