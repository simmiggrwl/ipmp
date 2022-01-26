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
    int rowflag=0, colflag=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && arr[i][j]==1){
                rowflag=1;
            }
            if(j==0 && arr[i][j]==1){
                colflag=1;
            }
            if(arr[i][j]==1){
                arr[0][j]=1;
                arr[i][0]=1;
            }
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(arr[0][j]==1 || arr[i][0]==1){
                arr[i][j]=1;
            }
        }
    }
    if(rowflag==1){
        for(int i=0;i<n;i++){
            arr[0][i]=1;
        }
    }
    if(colflag==1){
        for(int i=0;i<m;i++){
            arr[i][0]=1;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";}
            cout<<endl;
    }
    return 0;
}