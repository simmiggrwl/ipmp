#include <bits/stdc++.h>
using namespace std;

float calcpower(float m, int n){
    if(n==0) return 1;
    if(n==1) return m;
    int x=calcpower(m,n/2);
    if(n%2==0) return x*x;
    else return m*x*x;
}

int main()
{
    float m;
    int n;
    cin>>m>>n;
    float power=calcpower(m,abs(n));
    if(n>0)
    cout<<power<<endl;
    else {
        float ans=1/power;
        cout<<setprecision(2)<<ans<<endl;}
    return 0;
}