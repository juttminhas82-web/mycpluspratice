#include<iostream>
using namespace std;
int main(){
    int indexj = 0;
    int indexi = 0;
    bool index=false;
    int arr[] = {5,6,3,7,2};
    int sz = 5;
    int target = 9;
    for(int i = 0; i<sz;i++){
        for(int j = i+1;j<sz;j++){
            if(target==arr[i]+arr[j]){
                 index=true;
                indexi=i;
                indexj=j;
                break;
            }
        }
    }
    if(index==true){
        cout<<"\nyes there are arry eqaul to target value : "<<endl<<"The first index "<<indexi
        <<"\nThe second index : "<<indexj<<"\nThere value is "<<arr[indexi]<<" "<<arr[indexj];

    }
    else{
        cout<<"not found the arry bro ";
    }
    return 0;
}