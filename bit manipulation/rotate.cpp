//rotate by d bits
#include <bits/stdc++.h>
#define INTBIT 32
using namespace std;

void leftrotate(int n, int d){
    int x=n<<d;
    int y=n>>(INTBIT-d);
    cout<<"Left Rotated: ";
    cout<<(x|y)<<endl;
}

void rightrotate(int n, int d){
    int x=n>>d;
    int y=n<<(INTBIT-d);
    cout<<"Right Rotated: ";
    cout<<(x|y)<<endl;
}

int main()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    leftrotate(n,d);
    rightrotate(n,d);
    return 0;
}

//int bit size is 32 so we use int for all variables
//short bit size is 16 so if we want answer acc to 16 bits then make all data types short
//long is 64 bits