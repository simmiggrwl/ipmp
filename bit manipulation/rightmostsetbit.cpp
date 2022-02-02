#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=n;
    int pos=0;
    while(n){
        pos++;
        if((n&1)==1) break;
        n=n>>1;
    }
    cout<<pos<<endl;
    
    //or
    
    int x= (m & -m);
    //in -m all bits get flipped except the rightmost set bit.
    cout<<log2(x)+1;
    return 0;
}