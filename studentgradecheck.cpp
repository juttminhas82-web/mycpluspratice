#include<iostream>
using namespace std;
int main(){
    char name[10];
    int num[3];
    int total=0;
    cout<<"enter the name : ";
    cin>>name;
    cout<<"enter the 3 subject marks : \n";
    for(int i=0;i<3;i++){
        cout<<"enter the marks ";
        cin>>num[i];
        cout<<endl;
    }
    for(int j=0;j<3;j++){
      total=total+num[j];
    }
    cout<<endl;
    cout<<"the total is marks is : "<<total;
    cout<<endl;
    double average =total/3.0;

    cout<<"the averge is : "<<average;
    cout<<endl;
    if(num[0]!=num[1] and num[0]!=num[2]
    and num[1]!=num[2]){
       if(num[0]>num[1] and num[0]>num[2]){
        cout<<num[0]<<" is the gratest ";
       }
       else if(num[1]>num[2]&&num[1]>num[0]){
        cout<<num[1]<<" is the greatest";

       }
       else{
       cout<<num[2]<<" is the greatest ";
    }
    
}
else{
    cout<<"the two or more no are equal ";
}
cout<<endl;
if(num[0]!=num[1]and num[0]!=num[2]
and num[1]!=num[2]){
if(num[0]<num[1] and num[0]<num[2]){
        cout<<num[0]<<" is the smallest ";
       }
       else if(num[1]<num[2]&&num[1]<num[0]){
        cout<<num[1]<<" is the smallest";

       }
       else{
       cout<<num[2]<<" is the smallst ";
    }
cout<<endl;
}

    if(average>=80){
        cout<<"The grade is A";
    }
    else if(average>=70){
        cout<<"The grade is B";
    }
    else if(average>=60){
        cout<<"The grade is C";
    }
    else if(average>=50){
        cout<<"The grade is D";
        
    }
    else if(average>=40){
        cout<<"The grade is E";
    }
    else
    cout<<"The grade is F";


    return 0;
}