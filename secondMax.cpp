#include<iostream>
#include<climits>
using namespace std;
int getSecondMax(int arr[],int n){
    int max=INT_MIN;
    int min=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            min=max;
            max=arr[i];
        }
        else if(arr[i]>min && arr[i]!=max){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<getSecondMax(arr,n);
return 0;
}