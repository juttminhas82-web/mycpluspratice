#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arry[5] = {1,2,4,5};
    int n = 4;
    int target = 2;
    for(int i =n ; i>target;i--){
        arry[i] = arry[i-1];
    }
    cout<<"Enter The value you want to enter at target ";
    cin>>arry[target];
    cout<<"Now the arry become : ";
    for(int i = 0 ; i<5;i++){
        cout<<" "<<arry[i];
    }
    return 0;
}