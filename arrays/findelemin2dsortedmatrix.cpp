#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter order of matrix: ";
    cin>>n;
    int arr[n][n];
    cout<<"enter matrix elements: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int k;
    cout<<"enter element to be searched: ";
    cin>>k;
    int i=0,j=n-1;
    int flag=0;
    while(i<n && j>=0){
        if(arr[i][j]==k){
            flag=1;
            break;
        }else if(arr[i][j]>k){
            j--;
        }else{
            i++;
        }
    }
    if(flag==1) cout<<"element found in "<<i+1<<" row and "<<j+1<<" column."<<endl;
    else cout<<"element not found"<<endl;
    return 0;
}