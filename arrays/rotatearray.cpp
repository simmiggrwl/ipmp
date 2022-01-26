#include <bits/stdc++.h>
using namespace std;

// int gcd(int a, int b){
//     if(b==0) return a;
//     else return gcd(b, a%b);
// }

// void rotatearray(int arr[], int n, int d){
//     d=d%n;
//     int calcgcd=gcd(n,d);
//     for(int i=0;i<calcgcd;i++){
//         int temp=arr[i];
//         int j=i;
//         while(1){
//             int k=j+d;
//             if(k>=n){
//                 k=k-n;
//             }
//             if(k==i){
//                 break;
//             }
//             arr[j]=arr[k];
//             j=k;
//         }
//         arr[j]=temp;
//     }
//     cout<<endl<<"Rotated array is: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
void rotatebyone(int arr[], int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void rotatearray(int arr[], int n, int k){
    for(int i=0;i<k;i++){
        rotatebyone(arr,n);
    }
    cout<<"Rotated array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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
    cout<<"Rotate by: ";
    int d;
    cin>>d;
    rotatearray(arr, n, d);
    return 0;
}