#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort012(int arr[], int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        switch(arr[mid]){
            case 0:
            swap(&arr[low], &arr[mid]);
            low++;
            mid++;
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(&arr[mid], &arr[high]);
            high--;
            break;
        }
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
    sort012(arr,n);
    cout<<"array after segregation: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
