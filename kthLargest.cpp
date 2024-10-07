#include<iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int kthLargest(int arr[], int n, int k){
    sort(arr, n);
    return arr[n-k];
}// O(nlogn)

int main(){
    int arr[]={2,3,1,5,3,7,8};
    cout<<kthLargest(arr, 7, 3);
return 0;
}