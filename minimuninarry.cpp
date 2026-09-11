#include<iostream>
using namespace std;
int main(){
    int arr[7]={9,2,3,4,5,7,9};
    int smallest = arr[0];
    for(int i = 0;i<7;i++){
        if(smallest>arr[i]){
            smallest =arr[i];
        }
    }
    cout<<"The smallest value in arry is : "<<smallest;
    return 0;
}