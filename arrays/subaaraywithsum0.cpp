#include <bits/stdc++.h>
using namespace std;

void subarray(int arr[], int n)
{
    unordered_set<int> sums;

    int sum=0,flag=0;
    for (int i=0;i<n;i++) 
    {
        sum += arr[i];
        if (sum == 0 
            || (sums.find(sum) 
            != sums.end())){
                flag=1;
            cout<<"subarray with sum 0 found";}

        sums.insert(sum);
    }
    if(flag==0) cout<<"No such subarray exists.";
}


int main()
{   
    int n;
    cout<<"enter number of elements in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subarray(arr,n);
    return 0;
}
