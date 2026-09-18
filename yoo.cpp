#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {1,2,3,4};
    for(int i = 0;i<vec.size();i++){
        for(int j = 0 ; i<vec.size();j++){
            if(i!=j){
                vec[i] = vec[i] * vec[j];
            }
        }
    }
    for(int k = 0; k<vec.size();k++){
        cout<<" "<<vec[k];
    }
    return 0;
}