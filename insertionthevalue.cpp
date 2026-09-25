#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[6] = {10,20,30,40,50};
    int sz = 5;
    int taregetindex = 2;
    for(int i =sz;i>taregetindex;i--){
        arr[i] =arr[i-1];
    }
    arr[taregetindex] = 25;
    for(int j =0;j<6;j++){
        cout<<" "<<arr[j];
    }
    return 0;
}