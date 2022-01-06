#include <bits/stdc++.h>
using namespace std;

void find3nossubsequence(int arr[], int n){
    int s,l;
    int flag1=0,flag2=0;
    int x=0;
    for(int i=1;i<n-1;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]) {
                flag1=1;
                s=arr[j];
                break;
            }
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                flag2=1;
                l=arr[j];
                break;
            }
        }
        if(flag1==1 && flag2==1) {x=i; break;}
    }
    if(flag1==1 && flag2==1)
    cout<<s<<" "<<arr[x]<<" "<<l;
    else cout<<"No such triplet found";
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    find3nossubsequence(arr, n);
    return 0;
}

