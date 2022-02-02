//pos of only set bit
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(ceil(log2(n))==floor(log2(n)))
    cout<<log2(n)+1<<endl;
    else cout<<-1<<endl;
    
    //or
    int pos=0;
    if(ceil(log2(n))!=floor(log2(n))) cout<<-1<<endl;
    else{
    while(n){
        pos++;
        if((n&1)==1) break;
        n=n>>1;
    }
    cout<<pos;}
    
    return 0;
}