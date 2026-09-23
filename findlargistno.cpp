#include <iostream>
#include<numeric>
using namespace std;
int main() {
    int arr[] = {10,20,30,40,50};
    int totalsum = accumulate(arr,arr+5,0);
    int avg = totalsum/5;
    cout<<"The total sum is : "<<totalsum<<endl;
    cout<<"The avg is "<<avg;
    return 0;
}