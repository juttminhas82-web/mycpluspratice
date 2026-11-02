#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int>vec= {1,2,3,0,0,0};
    vector <int>vec2 = {2,4,6};
    int vecs = 3;
    int vecss = 3;
    int index = 5;
    int i=vecss -1;
    int k=vecs - 1;
    while(i>=0&&k>=0){
        if(vec[i]>=vec2[k]){
            vec[index] = vec[i];
            index--;
            i--;
        }
        else{
            vec[index]=vec2[k];
            index--;
            k--;
        }
    }
    for(int i = 0; i<vec.size();i++){
        cout<<" "<<vec[i];
    }


    
    return 0;
}