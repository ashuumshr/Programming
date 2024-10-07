#include<iostream>
using namespace std;
int binarysearch(int n, int arr[], int key){
    int start=0, end=n;
    int mid=n/2;
    while(start<end){
     //   int mid=(start+end)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter the key: ";
    cin>>key;
    cout<<binarysearch(n,arr,key);
    
    return 0;
}