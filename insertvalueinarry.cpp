#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 20, 30, 40, 50,0};
int n = 5;
int target=2;
for(int i = n;i>target;i--){
    arr[i]=arr[i-1];
}
arr[target] = 25;
for (int i = 0; i < 6; i++)
{
 cout<<" "<<arr[i];
}
    return 0;
}