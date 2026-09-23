#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 3};
for(int i=0;i<7;i++){
       int feq=0;
    int a =arr[i];
    for(int j = i;j<7;j++){
        if(i!=j&&a==arr[j]){
          feq++;
        }
    }
    if(feq>=1){
        cout<<" "<<arr[i];
    }
}


    return 0;
}