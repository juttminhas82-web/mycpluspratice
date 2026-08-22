#include<iostream>
using namespace std;
int scannum(){
    do{
    int value;
    cin>>value;
    if(cin.fail()){
        cin.clear();
        cin.ignore(1000,'\n');
    } 
    else if( value<0||value>100 ){
           cout<<"not a fool boy enter the real marks : ";
    }
    else{
        return value;
    }
}while(true);
}
int main(){
    string name;
    int total = 0;
    int marks[5];
    double avg=0;

    cout<<"enter the name : ";
    getline(cin,name);
    cout<<"enter the marks of 5 subjects : ";
    for(int i=0;i<5;i++){
        cout<<"Enter the "<<i+1<<" Subject marks ";
        marks[i]=scannum();
        cout<<endl;
    }
    for(int j=0;j<5;j++){
        total = total + marks[j];
    }
    cout<<"the total marks are "<<total;
    avg=total/5;
    cout<<"\nthe avg is "<<avg<<endl;
    if (avg>=70){
        cout<<"Grade A";
    }
    else if(avg>=60){
        cout<<"Grade B";
    }
    else if(avg>=40){
        cout<<"Grade C";
    }
    else{
        cout<<"you fail dummmmmm";
    }

    return 0;
}