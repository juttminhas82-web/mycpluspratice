#include <iostream>
#include <vector>
using namespace std;
int isvalid(vector<int> &vec,int n,int m, int maxallocation){
    int stu =1; int pages = 0;
    for(int i = 0; i<n;i++){
        if(vec[i]>maxallocation){
            return false;
        }
        if(pages +vec[i]<=maxallocation){
            pages +=vec[i];
        }else{
            stu++;
            pages = vec[i];
        }
    }
    return stu > m ? false : true;
}
int allocatebook(vector<int>&vec,int n,int m){
    if(m>n){
        return -1;
    }
 
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum + vec[i];
    }
    int start = 0; int end = sum;
       int ans = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isvalid(vec,n,m,mid)){
            ans = mid;
           end = mid - 1;
        }
        else 
        start = mid + 1;
    }
    return ans;
}
int main() {
    vector <int> vec = {1,2,3,4};
    int size = vec.size();
    int memeber = 2;
    cout<<"   "<<allocatebook(vec,size,memeber);
    return 0;
}