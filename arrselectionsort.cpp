#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {2,6,8,4,3};
    int n = 5;
    for (int i= 0 ; i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min]= temp;
    }
    for (int i = 0; i < n; i++)
    {
     cout<<arr[i]<<" ";
    }
    

    return 0;
}