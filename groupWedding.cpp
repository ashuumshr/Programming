#include <cmath>
#include <climits>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}

void swap(int arr[],int a,int b){
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
}

void sortAsc(int arr[],int n){
    for(int j=0;j<n;j++){
    for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1])
                swap(arr,i,i+1);
        }
    }
    printArr(arr, n);
}
void sortDsc(int arr[],int n){
    for(int j=0;j<n;j++){
    for(int i=0; i<n-1; i++){
            if(arr[i]<arr[i+1])
                swap(arr,i,i+1);
        }
    }
    printArr(arr, n);
}
int sum(int a1[],int a2[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a1[i]*a2[i];
    }
    return sum;
}

int minCost(int br[], int gr[], int n){
    if(n==1) return br[0]*gr[0];
    sortAsc(br, n);
    cout<<endl;
    sortDsc(gr, n);
    cout<<endl;
    return sum(br,gr,n);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int br[n];
    int gr[n];
    for (int i=0; i<n ;i++){
        cin>>br[i];
    }
    for (int i=0; i<n ;i++){
        cin>>gr[i];
    }
    cout<<minCost(br,gr, n);
    return 0;
}
