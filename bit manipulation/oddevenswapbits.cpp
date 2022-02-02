//swap even and odd bits
#include <bits/stdc++.h>
using namespace std;

int swapoddevenbits(int n){
    for(int i=0;i<32;i+=2){
        int j=(n>>i)&1;
        int k=(n>>(i+1))&1;
        n=n-(j<<i)-(k<<(i+1))+(j<<(i+1))+(k<<i);
    }
    return n;
}

int swapoddandevenbits(int n){
    int evenbits=n & 0xAAAAAAAA; //0xAAAAAAAA is 10101010101010101010101010101010
    int oddbits=n & 0x55555555; //0x55555555 is 01010101010101010101010101010101
    evenbits=evenbits>>1;
    oddbits=oddbits<<1;
    return evenbits | oddbits;
}

int main()
{
    int n;
    cin>>n;
    int m=swapoddevenbits(n);
    int p=swapoddandevenbits(n);
    cout<<"Value after swapping odd and even bits of "<<n<<" is "<<m<<endl;
    cout<<"Value after swapping odd and even bits of "<<n<<" is "<<p<<" by second method";
    return 0;
}