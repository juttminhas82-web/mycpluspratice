#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start = 0; 
    int end = size - 1;
    while(start<end){
      swap(arr[start],arr[end]);
      start ++;
      end --;
    }

}
int main(){
    int arr[]={1,2,3,4,7,6};
    int size = 6;
  reverse(arr,size);
  for(int i = 0;i<6;i++){
 cout<<" "<<arr[i]<<endl;
  }
}