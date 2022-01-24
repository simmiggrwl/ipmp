#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter no of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int product[n]{1};
    int temp=1;
    for(int i=0;i<n;i++){
        product[i]=temp;
        temp=temp*arr[i];
    }
    temp=1;
    for(int i=n-1;i>=0;i--){
        product[i]*=temp;
        temp=temp*arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<product[i]<<" ";
    }
    return 0;
}