#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr [3];
    cout<<"Enter the 3 number : ";
    for(int i = 0; i<3;i++){ 
        cin>>arr[i];
        cout<<"\n";
}
cout<<"The max number is : "<<max(max(arr[0],arr[1]),arr[2]);
return 0;
}