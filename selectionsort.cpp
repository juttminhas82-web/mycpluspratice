#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr [] = {23,21,22,7,43};
    int n = 5;
    int postion;
    int count;
    int var;
    for(count = 1;count<n;count++){
        var = arr[count];
        for(postion = count - 1 ; postion>=0;postion--){
            if(arr[postion]>var){
                arr[postion + 1] = arr[postion];
            }
            else break;
        }
          arr[postion+1] = var;
        
    }
    for(int i = 0;i<n;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}