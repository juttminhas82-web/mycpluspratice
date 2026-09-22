#include<iostream> 
#include<climits>
using namespace std;
int main(){
    int arry[8]={1,2,5,46,75,456,32,64};
    int sz = 8;
    int max = INT_MIN;
    int secondmax = INT_MIN;
    for(int i = 0;i<sz;i++){
        if(arry[i]>max){
            secondmax = max;
            max = arry[i];
        }
        else if(i>secondmax&&i!=max){
            secondmax = arry[i];
        }
    }
    cout<<"The second largest number is : "<<secondmax;
}