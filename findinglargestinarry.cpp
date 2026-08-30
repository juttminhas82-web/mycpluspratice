#include<iostream>
using namespace std;
int main(){
    int arr[5] = { 23, 34 , 4 , 43 ,54 };
    int Sindex = 0 ;
    int lindex = 0 ;
    int smallest = arr[0];
    int largest = arr[0];
    for(int i = 0; i<5;i++){
        if(smallest>arr[i]){  
            smallest = arr[i];
            Sindex = i+1;

        }
        if(largest<arr[i]){
            largest = arr[i];
            lindex = i+1;
        }
    }
    cout<<"The smallest value is : "<<smallest<<"\nThe value is   " <<Sindex;
    cout<<"\nThe largest value is : "<<largest<<"\nThe value is    "<<lindex;
}