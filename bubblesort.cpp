#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {2,3,1,5,4};
    int sz = vec.size()-1;
    for(int i = 0;i<sz;i++){
        for(int j=0;j<sz;j++){
             if(vec[j]>vec[j+1]){
                int temp = vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
             }
        }

    }
    for(int i = 0;i<sz;i++){
        cout<<" "<<vec[i];
    }
    return 0;
}