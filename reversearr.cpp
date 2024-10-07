#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: "<< endl;
    cin>>n;
    int arr[n];
    int newarr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the"<<i<<"th element of array: "<< endl;
        cin>>arr[i];
    }
    cout<<"array before reversing: ";
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        newarr[i]=arr[n-i-1];
    }
    cout<<endl<<"array after reversing: ";
    for(int i=0;i<n;i++){
        cout<<newarr[i]<<" ";
    }
}