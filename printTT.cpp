#include<iostream>
using namespace std;
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return;
}
void printTT(int n, int a[], int i)
{ 
if(i >= n) {
    a[i] = 0;
    printArr(a,n);
    return;
}

a[i]=0;
printTT(n,a,i+1);
a[i]=1;
printTT(n,a,i+1);

} 
int main(){
    int n;
    cin>>n;
    int a[]={};
    int i=0;
    printTT(n,a,i);
return 0;
}