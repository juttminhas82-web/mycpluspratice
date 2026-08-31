#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    vector<int> vec (3,5);
    vector<int> vect = {1,2,3};
   
   vec.push_back(35);
   for(int i : vec){
    cout<<"The values are : "<<i<<endl;
   }
cout<<"the size is : "<<vec.size();
   vec.pop_back();
   for(int i : vec){
    cout<<"The values are : "<<i<<endl;
   }
cout<<"the size is : "<<vec.size()<<endl;
cout<<"The front value is : "<<vec.front()<<endl;
cout<<"the end value is : "<<vec.back()<<endl;
cout<<"The vector at "<<vec.at(2);
return 0;
}