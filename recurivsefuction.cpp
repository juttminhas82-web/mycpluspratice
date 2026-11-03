#include <iostream>
#include <vector>
using namespace std;
 void count(int n){
        if(n>5){
            return;
        }
        cout<<n<<" ";
        count(n+1);
    }

int main() {
 count(1);
    return 0;
}