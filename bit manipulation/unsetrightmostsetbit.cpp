//unset rightmost set bit
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    //n-1 would have all the bits flipped after the rightmost set bit (including the set bit). 
    //So, doing n&(n-1) would give us the required result. 
    cout<<(a&(a-1));
    return 0;
}