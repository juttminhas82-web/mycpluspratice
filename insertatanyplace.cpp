#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr [6] = {2,3,4,5,6};
    int postion;
    int sz = 5;
    cout<<"Enter the index value for entering : ";
    cin>>postion;
    if(postion >= 0 && postion <=sz){
        for(int i =sz;i>postion;i--){
            arr[i] = arr[i-1];
        }
        cout<<"Enter the add value : ";
        cin>>arr[postion];
    }
    else{
        cout<<"Invalid index ";
    }
    for(int j =0;j<6;j++){
        cout<<" "<<arr[j];
    }
    return 0;
}