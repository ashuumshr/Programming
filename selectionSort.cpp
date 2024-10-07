#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}

int maxIx(int arr[],int n){
    int maxindex=0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[maxindex])
            maxindex=i;
    }
    return maxindex;
 }

void swap(int arr[],int a,int b){
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
}

int maxi(int arr[], int n){
    return n-1;
}

void selectionSort(int arr[], int n){
    while(n>1){
        int maxElementIdx=maxIx(arr,n);       //index of max element in the array
        int maxIdx=maxi(arr,n);             //max or last (unsorted) index of array
        if(arr[maxElementIdx]>arr[maxIdx]){
            swap(arr,maxElementIdx,maxIdx);
        }
        n--;
    }
}

int main(){
    int arr[]={1,6,1,3,5,7};
    selectionSort(arr,6);
    printArr(arr,6);
return 0;
}