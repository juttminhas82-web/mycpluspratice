#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int mx=0;
    int secondmx=0;
    for(int i =0;i<5;i++){
        if(arr[i]>mx){
            secondmx =mx;
            mx = arr[i];
            
        }
        else if(arr[i]>secondmx&&arr[i]!=mx){
            secondmx = arr[i];
        }
    }
    cout<<"The second max is "<<secondmx;
    return 0;
}