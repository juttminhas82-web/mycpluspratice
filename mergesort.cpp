#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>&vec,int mid,int start,int end){
    vector <int> temp;
    int i= start; int j =mid +1;
    while(i<=mid&&j<=end){
        if(vec[i]<vec[j]){
            temp.push_back(vec[i]);
            i++;
        }
        else{
            temp.push_back(vec[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(vec[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(vec[j]);
        j++;
    }
    for(int index = 0; index<temp.size();index++){
            vec[index+start] = temp[index];
    }
}
void mergesort(vector<int>&vec,int start,int end){
    if(start<end){
     int mid = start +(end - start)/2;
     mergesort(vec,start,mid);//for left half
     mergesort(vec,mid+1,end);//for right
     merge(vec,mid,start,end);
    }

}

int main() {
    vector <int>vec= {1,3,2,8,6,9};
    int start = 0;
    int end = vec.size()-1;
    mergesort(vec,start,end);
    for(int i :vec){
        cout<<" "<<i;
    }
    return 0;
}