#include <bits/stdc++.h>
using namespace std;


/** void largestsubarray(int arr[], int n){
    int sum=0;
    int maxsum=INT_MIN;
    int start,end,change=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxsum){
            maxsum=sum;
            end=i;
            start=change;
        }if(sum<0){
            change=i+1;
            sum=0;
        }
    }
    
    cout<<"Sum: "<<sum<<endl;
    cout<<"Start index: "<<start<<endl;
    cout<<"Last index: "<<end<<endl;
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}*/
void largestsum(int arr[], int n){
    int sumsofar=0;
    int sum=INT_MIN;
    int start,end,change=0;
    for(int i=0;i<n;i++){
        sumsofar+=arr[i];
        if(sumsofar>sum){
            sum=sumsofar;
            start=change;
            end=i;
        }
        if(sumsofar<0){
            sumsofar=0;
            change=i+1;
        }
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Start index: "<<start<<endl;
    cout<<"End index: "<<end<<endl;
}

int main()
{
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    largestsum(arr, n);
    return 0;
}