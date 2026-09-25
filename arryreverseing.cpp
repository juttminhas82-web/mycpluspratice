#include <iostream>
#include<climits>
using namespace std;

int main() {
    int arr[5] = {5,4,3,2,1};
    int sz = 5;
    int begin = 0;
    int end = sz - 1;
    while(begin<end){
        swap(arr[begin],arr[end]);
        begin ++;
        end --;
    }
    for(int i = 0;i<5;i++){
        cout<<" "<<arr[i];
    }

    return 0;
}