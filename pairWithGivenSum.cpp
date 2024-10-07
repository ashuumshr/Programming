#include<iostream>
using namespace std;
//check if the sum of any two integers in the array is equal to x or not
//O(n^2)
int* sortArray(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
bool isPresent(int arr[],int n,int x){
    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==x){
                return true;
            }
        }
    }
    return false;
}
//code can be optimised using two pointer technique
bool optIsPresent(int arr[],int n,int x){
    int *sa=sortArray(arr,n);
    int l=0;
    int r=n-1;
    while(l!=r){
        if(sa[l]+sa[r]==x){
            return true;
        }
        else if(sa[l]+sa[r]>x){
            r--;
        }
        else{
            l++;
        }
    }
    return false;
}
int main(){
    int arr[]={1,2,3,4,-1,-2};
    int n=sizeof(arr)/sizeof(int);
    int x=-1;
    if(isPresent(arr,n,x)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    cout<<endl;
        if(optIsPresent(arr,n,x)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
return 0;
}