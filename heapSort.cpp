#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}
void swap(int arr[], int a, int b){
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
}

void heapify(int arr[], int n, int r){
    if(r>=n){ return; }
    int min=r;
    if((2*r)+1<n && arr[min]>arr[(2*r)+1]){
        min=(2*r)+1;
    }
    if((2*r)+2<n && arr[min]>arr[(2*r)+2]){
        min=(2*r)+2;
    }
    if(r!=min){
        swap(arr,r, min);
        heapify(arr, n, min);
    }
}

void buildHeap(int arr[],int n){
    //minheap
    for(int i=n/2; i>=0; i--){
        heapify(arr, n, i);
    }
}

int delHeapElement(int arr[], int n){
    int val=arr[0];
    arr[0]=arr[n-1]; // this will help in maintaining the heap except for the first element (arr[0])
    // and then we will heapfiy that too 
    n--;
    heapify(arr,n,0);
    return val;
}
void heapSort(int arr[], int n){
    buildHeap(arr, n);
    for(int i=0; i<n; i++){
        int val= delHeapElement(arr, n-i);
        arr[n-i-1]=val;
    }
}
int main(){
    int arr[]={4,2,6,5,8,1,11,7};
    int n=sizeof(arr)/sizeof(int);
    heapSort(arr,n);
    printArr(arr, n);
    return 0;
}