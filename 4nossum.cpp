#include <bits/stdc++.h>
using namespace std;

// void find4nos(int a[], int n, int k){
//     for(int i=0;i<n-3;i++){
//         for(int j=i+1;j<n-2;j++){
//             int l=j+1;
//             int r=n-1;
//             while(l<r){
//                 if(a[i]+a[j]+a[l]+a[r]==k){
//                     cout<<a[i]<<" + "<<a[j]<<" + "<<a[l]<<" + "<<a[r]<<" = "<<k<<endl;
//                     l++;
//                     r--;
//                 }
//                 else if(a[i]+a[j]+a[l]+a[r]<k) l++;
//                 else r--;
//             }
//         }
//     }
// }

void find4nos(int a[], int n, int k){
    map<int, pair<int,int>> sums;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            sums.insert({a[i]+a[j],{i,j}});
        }
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            int sum=a[i]+a[j];
            if(sums.find(k-sum)!=sums.end()){
                auto itr=sums.find(k-sum);
                if(itr->second.first!=i && itr->second.second!=j && itr->second.first!=j && itr->second.second!=i){
                    cout<<a[i]<<" + "<<a[j]<<" + "<<a[itr->second.first]<<" + "<<a[itr->second.second]<<" = "<<k<<endl;
                    return;
                }
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int k;
    cin>>k;
    find4nos(a,n,k);
    return 0;
}

