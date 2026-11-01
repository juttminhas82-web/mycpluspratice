#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {0,0,1,2,1,1,2,2,0};
    int sz = vec.size();
    for(int i = 0;i<sz;i++){
        bool isswap = false;
        for(int j=0;j<sz-i;j++){
             if(vec[j]>vec[j+1]){
                int temp = vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
                isswap=true;
             }
        }
        if(isswap==false){
            break;
        }
    }
    for(int i = 0;i<sz;i++){
        cout<<" "<<vec[i];
    }
    return 0;
}