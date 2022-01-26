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
    int l=0;
    int r=n-1;
    while(l<r){
        if(arr[l]%2!=0){
            swap(&arr[l], &arr[r]);
            // int temp=arr[l];
            // arr[l]=arr[r];
            // arr[r]=temp;
            r--;
        }else{
            l++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
