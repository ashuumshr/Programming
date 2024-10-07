#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void merge(int arr[], int l, int mid, int h){
    int mergeArr[h-l+1];
    int i1=l;
    int i2=mid+1;
    int x=0;
    while(i1<=mid && i2<=h){
        if(arr[i1]<=arr[i2]){
            mergeArr[x]=arr[i1];
            x++;i1++; //instead of this line we can change previous line as mergeArr[x++]=arr[i1++];
        }
        else{
            mergeArr[x]=arr[i2];
            x++;i2++;
        }
    }
    // if one array is left with some elements , then any one of the loop will get executed and get 
    // as it is copied in the main arr
    while(i1<=mid){
        mergeArr[x++]=arr[i1++];
    }
    while(i2<=h){
        mergeArr[x++]=arr[i2++];
    }

    for(int i=0, j=l; i<h-l+1; i++,j++){
        arr[j]=mergeArr[i];
    }
}

void mergeSort(int arr[], int l, int h){
    int mid=(l/2)+(h/2);
    if(l>=h){
        return;
    }
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,h);
    merge(arr,l,mid,h);
}

int main(){
    int arr[]={6,3,9,1,1,4,5,1};
    int n=sizeof(arr)/sizeof(int);
    mergeSort(arr,0,n-1);
    printArr(arr,n);
return 0;
}