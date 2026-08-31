#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {2,2,5,3,3};
    int a = vec.size();
    for(int i = 0 ; i<a;i++){
         int index = 0;
        for (int j = 0;j<a;j++){
           if(i != j && vec[i]==vec[j]){
                index = 1;
                break;
           }
            }
            if(index == 0){
            cout << "The not repeat value is : " << vec[i];
            break;
        }
        }
    return 0;
}
