#include <bits/stdc++.h>
using namespace std;

void calcspan(int arr[], int n){
    int span[n];
    stack<int> s;
    s.push(0);
    span[0]=1;
    for(int i=1;i<n;i++){
    while(!s.empty() && arr[s.top()]<arr[i]) {s.pop();}
    if(s.empty()) {span[i]=i+1;}
    else span[i]=i-s.top();
    s.push(i);}
    
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter no of days: ";
    cin>>n;
    cout<<"Enter prices: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    calcspan(arr, n);
    return 0;
}