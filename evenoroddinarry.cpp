#include <iostream>
using namespace std;

int main() {
    int arr[] =  {2, 7, 10, 13, 18, 21, 24};
    int evenfrq = 0;
    int oddfrq = 0;
    for(int i= 0;i<7;i++){
        if(arr[i]%2==1){
            oddfrq++;
        }
        else if(arr[i]%2==0){
            evenfrq++;
        }
        else{
            continue;
        }
    }
    cout<<"The Even are "<<evenfrq<<endl;
    cout<<"The odd are "<<oddfrq<<endl;
    return 0;
}