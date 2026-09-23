#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10, 15, 20, 25, 30};
    int target = 25;
    int targetindex;
    bool f=false;
    for(int i = 0;i<5;i++){
        if(arr[i]==target){
           f=true;
           break;
        }
    }
    if(f==true){
        cout<<"The target is found ";
    }
    else{
        cout<<"The target not found ";
    }
    return 0;
}