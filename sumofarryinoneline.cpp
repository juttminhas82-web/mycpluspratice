#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4,5,6,7,9};
    int sum = accumulate(vec.begin(),vec.end(),0);
    cout<<"The sum is : "<<sum;
    return 0;
}