#include<cstdio> 
using namespace std;
int main(){
    const char*s="#include<cstdio>%cusing namespace std;%cint main(){%cconst char*s=%c%s%c;%cprintf(s,10,10,10,34,s,34,10);";
    printf(s,10,10,10,34,s,34,10);
}