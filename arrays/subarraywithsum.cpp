#include <bits/stdc++.h>
using namespace std;

void calcsubarrayn2(int arr[], int n, int k){
    int sum=0;
    int start=0,end=-1,flag=0;
    for(int i=0;i<n;i++){
        sum=arr[i];
        if(sum==k){
            flag=1;
            end=i;
            break;
        }
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                end=j;
                break;
            }if(sum>k){
                sum=0;
                start=i+1;
                break;
            }
        }if(sum==k) break;
    }
    if(flag==0) {cout<<"No subarray found"<<endl;
        return;
    }
    cout<<"Start index: "<<start<<endl;
    cout<<"End index: "<<end<<endl;
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

void calcsubarrayn(int arr[], int n, int k){
    int sum=0,start=0,end,flag=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        while(sum>k){
            sum-=arr[start];
            start++;
        }
        if(sum==k){
            flag=1;
            end=i;
            break;
        }
    }
    if(flag==0) {cout<<"No subarray found"<<endl;
        return;
    }
    cout<<"Start index: "<<start<<endl;
    cout<<"End index: "<<end<<endl;
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
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
    int k;
    cin>>k;
    calcsubarrayn2(arr, n, k);
    calcsubarrayn(arr, n, k);
    return 0;
}