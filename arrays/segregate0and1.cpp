#include <bits/stdc++.h>
using namespace std;

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
        while(arr[l]==0 && l<r){
            l++;
        }
        while(arr[r]==1 && l<r){
            r--;
        }
        if(l<r){
            arr[l]=0;
            arr[r]=1;
            l++;
            r--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
