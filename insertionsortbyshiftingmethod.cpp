    #include <iostream>
    #include <vector>
    using namespace std;

    int main() {
        int arr[]={5,4,3,2,1};
        int var;
        int pos ;
        int n = 5;
        for(int count = 1;count<n;count++){
    var = arr[count];
    for( pos = count - 1;pos>=0;pos--){
    if(arr[pos]>var){
        arr[pos + 1] = arr[pos];
    }
    else{
        break;
    }
    }
    arr[pos+1]=var;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<" "<<arr[i];
        }
        
        return 0;
    }