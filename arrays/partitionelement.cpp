#include<bits/stdc++.h>
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
    int leftsum=arr[l],rightsum=arr[r];
    int i=n-2;
    int flag=0;
    while(i>0 && l<r){
        if(i==1 && leftsum==rightsum){
            break;
        }else if(i==1){
            flag=1;
            break;
        }else if(leftsum>rightsum){
            rightsum+=arr[--r];
            i--;
        }else if(rightsum>leftsum){
            leftsum+=arr[++l];
            i--;
        }else if(leftsum==rightsum){
            leftsum+=arr[++l];
            rightsum+=arr[--r];
            i=i-2;
        }
    }
    if(flag==1) cout<<"no such element"<<endl;
    else cout<<"element "<<arr[l+1]<<" with index "<<l+1<<" is the partition element"<<endl;
    return 0;
}