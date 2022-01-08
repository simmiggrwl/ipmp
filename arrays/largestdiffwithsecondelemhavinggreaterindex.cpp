#include <bits/stdc++.h>
using namespace std;

void largestdiff(int arr[], int n){
    int maxdiff=arr[1]-arr[0];
    int x=0,y=0;
    int min=arr[0];
    for(int i=2;i<n;i++){
        if(arr[i]-min>maxdiff) {
            maxdiff=arr[i]-min;
            x=i;
            y=min;
        }
        if(arr[i]<min) min=arr[i];
    }
    cout<<arr[x]<<" and "<<y<<" give max diff equal to "<<maxdiff<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largestdiff(arr, n);
    return 0;
}
