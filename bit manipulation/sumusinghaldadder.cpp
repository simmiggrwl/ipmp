//sum using half adder approach
#include <bits/stdc++.h>
using namespace std;

int calcsum(int m, int n){
    while(n){
        unsigned carry=m&n;
        m=m^n;
        n=carry<<1;
    }
    
    return m;
}

int main()
{
    int m,n;
    cin>>m>>n;
    int sum= calcsum(m,n);
    cout<<m<<" + "<<n<<" = "<<sum;
    return 0;
}