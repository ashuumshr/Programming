#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
    }
}

void swap(int arr[],int a,int b){
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
}

void bubbleSort(int arr[], int n){
    for(int j=0;j<n;j++){
    for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1])
                swap(arr,i,i+1);
        }
    }
    printArr(arr,n);
}

int main(){
    int arr[]={5,4,7,3,5,2};
    bubbleSort(arr,6);
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}