#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter no of rows and columns: ";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> ans;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[i+j].push_back(arr[i][j]);
        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}