#include <bits/stdc++.h>
using namespace std;

void fib(int n){
    int arr[n+1];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<n<<" fibonnaci number is "<<arr[n]<<endl;
}

//o(n)
void fib1(int n){
    int a=0;
    int b=1;
    int c=0;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<n<<" fibonacci number is "<<c<<endl;
}

//o(n)
int fibrecursion(int n){
    if(n<=1) return n;
    else return fibrecursion(n-1)+fibrecursion(n-2);
}

int main()
{
    int n;
    cin>>n;
    fib(n);
    fib1(n);
    int x= fibrecursion(n);
    cout<<n<<" fibonacci number is "<<x<<endl;
    return 0;
}