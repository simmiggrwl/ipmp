//no of bits to flip to convert a to b
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    while(b){
        if((a&1)!=(b&1)) count++;
        a=a>>1;
        b=b>>1;
    }
    cout<<count;
    return 0;
}