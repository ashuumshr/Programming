#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void swap(int arr[],int a,int b){
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
}
//taking last element as the pivot
int partition(int arr[], int l, int h){
    int p=h;
    int x=l-1;
    for(int i=l;i<h;i++){
        if(arr[i]<arr[p]){
            x++;
            swap(arr,x,i);
        }
    }
    swap(arr,x+1,h);
    return x+1;
}
//quicksort (taking last element as the pivot)
void quickSort(int arr[],int l,int h){
    if(l>=h){
        return;
    }
    int p=partition(arr,l,h);
    quickSort(arr,l,p-1);
    quickSort(arr,p+1,h);
}

int main(){
    int arr[]={6,3,9,1,1,4,5,1};
    int n=sizeof(arr)/sizeof(int);
    quickSort(arr,0,n-1);
    printArr(arr,n);
return 0;
}