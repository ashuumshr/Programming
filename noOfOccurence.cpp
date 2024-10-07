// Question 2 - Given a sorted array with repeated values and a integer k , 
//find how many times k repeating in the array.
    //              {1,3,3,8,8,8,8,8,9,10,10} and k = 8 --> ans = 5
    //using binary search logic
    
#include<iostream>
using namespace std;

    int getFirstOccurence(int *arr, int k, int n){
        int start = 0;
        int end = n - 1 ;
        while(start<=end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == k && (mid == 0 || arr[mid] != arr[mid - 1])) {
                return mid;
            }
            if (arr[mid] >= k) {
                end = mid - 1;
            } else { // arr[mid]<k
                start = mid + 1;
            }
        }
        return -1 ;
    }

    int getLastOccurence(int* arr, int k, int n){
        int start = 0;
        int end = n - 1 ;
        while(start<=end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == k && (mid == n-1|| k != arr[mid+1])) {
                return mid;
            }
            if (arr[mid] > k) {
                end = mid - 1;
            } else { // arr[mid]<k
                start = mid + 1;
            }
        }
        return -1 ;
    }

    int getNoOfOccurence(int* arr,int k,int n){
        int firstOccurence = getFirstOccurence(arr, k, n);
        int lastOccurence = getLastOccurence(arr, k, n);
        cout<<firstOccurence<<" "<<lastOccurence<<" ";
        int ans = lastOccurence - firstOccurence + 1;
        return ans;
    }

int main(){
    int arr[]={1,3,3,8,8,8,8,8,9,10,10};
    int n=sizeof(arr)/sizeof(int);
    int k=8;
    cout<<getNoOfOccurence(arr,k,n);
return 0;
}