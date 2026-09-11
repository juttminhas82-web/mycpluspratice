#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,9,4,5};
    int largest = arr[0];
    for(int i = 0; i<5;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    cout<<"The largest value in arry is : "<<largest;
    return 0;
}