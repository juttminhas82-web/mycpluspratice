#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vec[5] ={1,2,4,5};
    int n =4;
    int tar = 2;
    for(int i =n;i>tar;i--){
        vec[i] = vec[i-1];
    }
    cout<<"Enter the value ";
    cin>>vec[tar];
    for(int i = 0 ; i<5;i++){
        cout<<" "<<vec[i];
    }
    return 0;
}