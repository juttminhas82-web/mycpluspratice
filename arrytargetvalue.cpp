#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[5] ={2,5,6,7,8};
    int target;
    int targetindex ;
    bool index = false;
    cout<<"Enter the target value : ";
    cin>>target;
    for(int i =0;i<5;i++){
        if(target==arr[i]){
           index = true;
           targetindex = i;
        }
    }
    if(index==true){
        cout<<"The target is find \n ";
        cout<<"The value of index is : "<<targetindex;
    }
    else{
        cout<<"The target not found ";
    }
    return 0;
}