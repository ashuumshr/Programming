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
    int max=r;
    if((2*r)+1<n && arr[max]<arr[(2*r)+1]){
        max=(2*r)+1;
    }
    if((2*r)+2<n && arr[max]<arr[(2*r)+2]){
        max=(2*r)+2;
    }
    if(r!=max){
        swap(arr, max, r);
        heapify(arr, n, max);
    }
}

void buildHeap(int arr[],int n){
    //making max heap in this case 
    //in an almost complete binary tree, there are n/2 leaf nodes therefore they dont need to 
    //be heapify and hence we will heapify the nodes from n/2 to the 0th node that is root  
    for(int i=n/2; i>=0; i--){
        heapify(arr, n, i);
    }
}

int main(){
    int arr[]={4,2,6,5,8,1,11,7};
    int n=sizeof(arr)/sizeof(int);
    buildHeap(arr,n);
    printArr(arr, n);
    return 0;
}