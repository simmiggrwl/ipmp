#include <bits/stdc++.h>
using namespace std;

//o(nlogn) time and o(1) soace
// void smallestposmissing(int arr[], int n){
//     sort(arr,arr+n);
//     int ans=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==ans) ans++;
//     }
//     cout<<ans;
// }

//answer always bw 1 and n+1 (n+1 in worst case)

//o(n) time o(n) space
void smallestposmissing(int arr[], int n){
    int b[n+1]={0};
    for(int i=0;i<n;i++){
        b[arr[i]-1]=1;
    }
    for(int i=0;i<n+1;i++){
        if(b[i]==0) {cout<<i+1; break;}
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
    smallestposmissing(arr, n);
    return 0;
}

