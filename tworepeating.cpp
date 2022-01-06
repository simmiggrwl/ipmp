#include <bits/stdc++.h>
using namespace std;

// void findrepeating(int arr[], int n){
//     map<int,int> elements;
//     for(int i=0;i<n;i++){
//         if(elements.find(arr[i])!=elements.end()){
//             cout<<arr[i]<<" ";
//         }
//         elements.insert({arr[i],1});
//     }
// }

// void findrepeating(int arr[], int n){
//     int a[n-2];
//     for(int i=0;i<n-2;i++){
//         a[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         a[arr[i]-1]++;
//         if(a[arr[i]-1]>1) cout<<arr[i]<<" ";
//     }
// }

void findrepeating(int arr[], int n){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]) cout<<arr[i]<<" ";
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
    findrepeating(arr, n);
    return 0;
}

