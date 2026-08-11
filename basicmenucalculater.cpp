#include<iostream>
using namespace std;
class calculater{
    private:
    double firstno;
    double secondno;
    double plus;
    double mines;
    double muli;
    double dive;

    public:
    int sum(double a,double b){
        plus=a+b;
        return plus;
    }
    int substract(double a,double b){
        mines=a-b;
        return mines;
    }
    int multi(double a,double b){
        muli=a*b;
        return muli;
    }
    int divide(double a,double b){
        dive=a/b;
        return dive;
    }

};
int main(){
    int manu;
    calculater a1;
    double c,d;
    do{
    cout<<"\n------menu------\n1.adding\n2.substract\n3.mulyiply\n4.divide\n5.exit\n";
    cin>>manu;
       if(manu==1){
        cout<<"first no : ";
        cin>>c;
        cout<<"second no : ";
        cin>>d;
        cout<<a1.sum(c,d);
       }
       else if(manu==2){
        cout<<"first no : ";
        cin>>c;
        cout<<"second no : ";
        cin>>d;
        cout<<a1.substract(c,d);
       }
       else if(manu==3){
cout<<"first no : ";
        cin>>c;
        cout<<"second no : ";
        cin>>d;
        cout<<a1.multi(c,d);
       }
       else if(manu==4){
        cout<<"first no : ";
        cin>>c;
        cout<<"second no : ";
        cin>>d;
        cout<<a1.divide(c,d);
       }
       else if(manu==5){
        break;
       }
       else{
        cout<<"enter from the menu ";
       }
    }while(manu!=5);
    return 0;
}