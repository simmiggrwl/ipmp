#include <bits/stdc++.h>
using namespace std;
const int MAX=10;

int first1index(bool arr[], int l, int r){
    while(l<=r){
        int mid=l+(r-l)/2;
        if((arr[mid-1]==0 || mid-1<0) && arr[mid]==1)
            return mid;
        else if(arr[mid]==0) return first1index(arr,mid+1,r);
        else return first1index(arr,l,mid-1);
    }
    return -1;
}

void findrowwmax1(int r, int c, bool a[][MAX]){
    int maxrowindex=0;
    int max=0;
    for(int i=0;i<r;i++){
        int first1=first1index(a[i],0,c-1);
        if(first1!=-1 && c-first1>max){
            max=c-first1;
            maxrowindex=i;
        }
    }
    cout<<"Row with maximum 1s is "<<maxrowindex<<" row."<<endl;
}

int main()
{
    int r,c;
    cout<<"enter number of rows and columns in matrix: ";
    cin>>r>>c;
    bool matrix[MAX][MAX];
    cout<<"Enter matrix elements: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    findrowwmax1(r,c,matrix);
    return 0;
}

