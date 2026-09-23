#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
  int begin = 0;
  int end = 4;
  while(begin<end){
    swap(arr[begin],arr[end]);
    begin++;
    end--;
  }
  for(int i =0;i<5;i++){
    cout<<" "<<arr[i];
  }
    return 0;
}