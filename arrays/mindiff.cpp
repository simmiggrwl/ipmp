#include <bits/stdc++.h>
using namespace std;

void mindiff(int arr[], int n){
    sort(arr,arr+n); //nlogn time
    int mindiff=abs(arr[1]-arr[0]);
    int l=0;
    for(int i=1;i<n-1;i++){
       int diff=abs(arr[i+1]-arr[i]);
       if(mindiff>diff){
           mindiff=diff;
           l=i;
       }
    }
    cout<<arr[l]<<" and "<<arr[l+1]<<" give min diff equal to "<<arr[l+1]-arr[l]<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mindiff(arr, n);
    return 0;
}

