#include<iostream>
using namespace std;
int linearsearch(int n, int arr[],int key){

    for (int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element you want to search: ";
    cin>>key;
    cout<<linearsearch(n,arr,key)<<endl;
    return 0;
}