#include <iostream>
using namespace std;
void change(int *p){
    *p = 60;
}
void changea(int &b){
    b = 30;
}
int main() {
    int a = 10 ;
    change(&a);
    cout<<"The value is change : "<<a;
    changea(a);
    cout<<"\nThe a value also change by alias : "<<a;
    
    return 0;
}