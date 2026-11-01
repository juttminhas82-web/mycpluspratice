#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> vec = {0,1,2,1,1,0,2};
    int size = vec.size();
    int sizeofzero= 0;
    int sizeofone= 0;
    int sizeoftwo= 0;
    for(int i =0;i<size;i++){
        if(vec[i]==0){
            sizeofzero++;
        }
        else if(vec[i]==1){
            sizeofone++;
        }
        else{
            sizeoftwo++;
        }
    }
    for(int k =0;k<sizeofzero;k++){
        vec[k]=0;
    }
      for(int k =sizeofzero;k<sizeofzero+sizeofone;k++){
        vec[k]=1;
    }
      for(int k = sizeofzero + sizeofone;
    k < sizeofzero + sizeofone + sizeoftwo; k++){
        vec[k]=2;
    }
    for(int i =0;i<size;i++){
        cout<< " "<<vec[i];
    }
    return 0;
}