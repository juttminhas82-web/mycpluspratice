#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {1,3,3,3,3,2};
    int n = vec.size();
    for(int i : vec){
        int frq = 0 ;
        for(int j : vec){
            if(j==i){
                frq++;
            }
        }
        if(frq>(n/2)){
            cout<< "The majority element is "<<i;
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}