#include<iostream>
using namespace std;

bool isPowerof2(int x){
    if((x>0) && (x&(x-1))==0)
            return true;
    else
        return false;
}
int main(){
    cout<<isPowerof2(20)<<" "<<isPowerof2(16);
return 0;
}