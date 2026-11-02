#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> a = {1,2,3,0,0,0};
    vector <int> b ={2,4,6};
    int as = 3;;//The size of the elements in a ;
    int bs = b.size();//The size of the elements in b;
    int index = as+bs - 1;//total size;
    int i = as-1;
    int j =bs-1;
    while(i>=0&&j>=0){
        if(a[i]>b[j]){
            a[index] = a[i];
            index--;
            i--;
        }
        else{
            a[index]=b[j];
            index--;
            j--;
        }
    }
    while(j>=0){
        a[index--]=b[j--];
    }
for(int i = 0;i<a.size();i++){
    cout<<" "<<a[i];

}
}