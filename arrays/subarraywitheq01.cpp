//TODO: hashmap method
#include <bits/stdc++.h>
using namespace std;

void subarrayequal01(int arr[], int n){
    int sum=0,start=0,end,flag=0,size=0,maxsize=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) sum=-1;
        else sum=1;
        size=1;
        for(int j=i+1;j<n;j++){
            if(arr[j]==0) sum+=-1;
            else sum+=1;
            size++;
            if(sum==0){
                if(size>maxsize){
                    maxsize=size;
                    start=i;
                    end=j;
                }
            }
        }
    }
    cout<<"Size:"<<maxsize<<endl;
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
    subarrayequal01(arr,n);
    return 0;
}