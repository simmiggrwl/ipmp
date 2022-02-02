//absolute value
#include <bits/stdc++.h>
using namespace std;

int absvalue(int n){
    int m=n>>31;
    if((m&1)==0) return n;
    else return -n;
}

int main()
{
    int n;
    cin>>n;
    int absval=absvalue(n);
    cout<<"Absolute value of "<<n<<" is "<<absval;
    return 0;
}