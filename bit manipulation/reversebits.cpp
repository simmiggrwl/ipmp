#include <bits/stdc++.h>
using namespace std;

unsigned int reverseBits(unsigned int num)
{
	unsigned int count = sizeof(num) * 8 - 1;//31 in this case, can be 7, 15 or any power of 2-1
	unsigned int reversenum = num;
	
	num >>= 1;
	while(num)
	{
	reversenum <<= 1;	
	reversenum |= num&1;
	num >>= 1;
	count--;
	}
	reversenum <<= count;
	return reversenum;
}

int main()
{
	unsigned int x;
    cin>>x;
	cout<<reverseBits(x);
}
