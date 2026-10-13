#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <int> vec = {3,4,5,6,7,0,1,2};
  int n = vec.size() - 1;
  int start = 0;
  int end = n;
  int target;
  cout<<"Enter the target value : ";
  cin>>target;
  while(start<=end){
    int mid = start + (end - start)/2;
    if(vec[mid]==target){
        cout<<"The target index is : "<<mid;
    }
    if(vec[start]<=vec[end]){
        if(target>=vec[start]&&target<=vec[mid]){
            end = mid - 1 ;
        }
        else{
            start = mid + 1;
        }
    }
    else{
        if(target>=vec[mid]&&target<=vec[end]){
               start = mid + 1;
        }
        else{
           
            end = mid - 1;
        }

        }
    }
    
    return 0;
  }