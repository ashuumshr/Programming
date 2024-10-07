#include<iostream>
using namespace std;
//bitwise basic operations
//mask eg. for 2nd bit of 5 = 0101 will be 1<<2 = 100

int setBit(int x, int n){
    int mask=1<<n;
    return x|mask;
}

int toggleBit(int x, int n){
    int m=1<<n;
    return x^m;
}

int resetBit(int x, int n){
    int m=1<<n;
    return (~m)&x;
}

int getBit(int x, int n){
    int m=1<<n;
    if(x&m==0)
        return 0;
    else
        return 1;
}
int main(){
    cout<<setBit(5,1)<<endl<<toggleBit(7,2)<<endl<<resetBit(3,2)<<endl<<getBit(9,2);
return 0;
}