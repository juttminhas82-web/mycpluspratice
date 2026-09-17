#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec ={2,3,6,1,5,6,7,8,9};
    int maxprofit = 0;
    int bestbday = vec[0];
    for(int i = 1;i<vec.size();i++ ){
        if(vec[i]>bestbday){
            maxprofit = max(maxprofit , vec[i] - bestbday );
        }
        bestbday = min(bestbday,vec[i]);
    }
    cout<<"The best buy price  is : "<<bestbday;
    cout<<"\nThe best selling profit  is : "<<maxprofit;
    return 0;
}