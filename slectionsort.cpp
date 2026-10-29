#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec ={5,4,3,2,1};
    int size = vec.size();
for(int i = 0;i<size;i++){
    int smallest = i;
    for(int j =i+1;j<size;j++){
        if(vec[j]<vec[smallest]){
            smallest = j;
        }
    }
    swap(vec[i],vec[smallest]);
}
for(int i = 0;i<size;i++){
    cout<<" "<<vec[i];
}
    return 0;
}