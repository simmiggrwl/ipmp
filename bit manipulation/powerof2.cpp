//power of 2 using bit manipulation
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0) cout<<"No"<<endl;
    else{
        int x=n&(n-1);
        if(x==0) cout<<"Yes";
        else cout<<"No";
    }
    return 0;
}