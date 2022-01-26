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
            cin>>arr[i][j];}
    }
    int arr1[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr1[j][m-i-1]=arr[i][j];
        }
    }
    cout<<endl<<"Rotated by 90 degrees: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr1[i][j]<<" ";}
            cout<<endl;
    }
    return 0;
}