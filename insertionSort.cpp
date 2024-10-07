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

void insertionSort(int arr[], int n)
{ 
    for(int i=1; i<n; i++) 
        { 
        int temp = arr[i]; 
        int j = i-1; 
        while(j>=0 && arr[j]>temp) 
        { 
            arr[j+1]=arr[j];
            // or use this swap func. -> swap(arr,j+1,j);
            j--; 
        } 
        arr[j+1] = temp; 
        } 
} 

int main(){
    int arr[]={5,3,6,2,6,0};
    insertionSort(arr,6);
    printArr(arr,6);

return 0;
}