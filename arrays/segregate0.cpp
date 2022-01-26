#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void segregate0(int arr[], int n){
    int l=0,r=n-1;
    while(l<r){
        if(arr[l]==0){
            swap(&arr[l],&arr[r]);
            r--;
        }else{
            l++;
        }
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
    segregate0(arr,n);
    cout<<"array after segregation: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
