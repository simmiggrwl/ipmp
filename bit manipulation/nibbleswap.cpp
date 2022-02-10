#include <iostream>
using namespace std;

unsigned int nibbleswap(unsigned int num)
{
	int x=15;
	int y=num&x;
	y=y<<((sizeof(num)*8)-4);
	x=x<<((sizeof(num)*8)-4);
	int z=x&num;
	z=z>>((sizeof(num)*8)-4);
	num=num>>4;
	num=num<<4;
	num=num|x;
	num=num<<4;
	num=num>>4;
	num=num|y;
	return num;
}

int main()
{
	unsigned int x;
	cin>>x;
	cout<<nibbleswap(x);
}
