#include <iostream>
#include <algorithm>
using namespace std;

int countSetBits(int n){
    int c=0;
    while(n>0){
        c=c+(n&1);
        n>>=1;
    }
    return c;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cout<<countSetBits(x)<<endl;
    }
    return 0;
}