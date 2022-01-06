#include <bits/stdc++.h>
using namespace std;

void sumclosestto0(int arr[], int n){
    sort(arr,arr+n); //nlogn time
    int l=0;
    int r=n-1;
    int sum;
    while(l<r){
        sum=arr[l]+arr[r];
        if(sum<0 && abs(arr[l+1]+arr[r])>abs(sum)){
            cout<<arr[l]<<" and "<<arr[r];
            break;
        }else if(sum>0 && abs(arr[l]+arr[r-1])>abs(sum)){
            cout<<arr[l]<<" and "<<arr[r];
            break;
        }else{
        if(sum<0){
            l++;
        }else if(sum>0){
            r--;
        }}
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sumclosestto0(arr, n);
    return 0;
}

