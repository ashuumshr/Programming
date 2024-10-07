#include<iostream>
using namespace std;



int Min(int arr[], int n){
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}

int myDoctor(int m[], int b, int n){
    if(b==0 || b==1)    return b;
    int arr[b];
    for(int i=0; i<b; i++){
        arr[i]=m[i];
    }
    int md;
    n=n-b;
    int min=Min(m,b);
    while(n>0){
        for(int i=0; i<b && n>0; i++){
            arr[i]=arr[i]-min;
            if(arr[i]==0){
                n--;
                md=i+1;
                arr[i]=arr[i]+m[i];
        } 
    }
    }
    return md;
}

int main(){
    int b;
    int n;
    cin>>b>>n;
    int m[b];
    for(int i=0; i<b; i++){
        cin>>m[i];
    }
    cout<<myDoctor(m,b,n);
return 0;
}
