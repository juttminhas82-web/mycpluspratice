#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {2, 5, 2, 8, 2, 10, 5};
    int target = 2;
    int tfeq =0;
    for(int i=0;i<7;i++){
        if(target==arr[i]){
            tfeq++;
        }
    }
    cout<<"The frequence of target is "<<tfeq;
    return 0;
}