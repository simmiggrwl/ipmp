#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //positive numbers at even index and negative numbers at odd index
    int pos=0;
    int neg=1;
    while(pos<n && neg<n){
        if(arr[pos]>0 && arr[neg]<0){
            pos+=2;
            neg+=2;
        }else if(arr[pos]>0 && arr[neg]>0){
            pos+=2;
        }else if(arr[pos]<0 && arr[neg]<0){
            neg+=2;
        }else if(arr[pos]<0 && arr[neg]>0){
            swap(&arr[pos], &arr[neg]);
            pos+=2;
            neg+=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}