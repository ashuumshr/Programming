#include<iostream>
using namespace std;

// 1, 1, 2, 3, 5, 8, 13, 21, 34, ....

int fib(int n){
    if(n==1){
        return 1;
    }
    else if(n<1){
        return 0;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    int x=fib(7);
    cout<<x<<endl;
return 0;
}