#include<stdio.h>
int main()
{
	int n=0x53;
	int s,d,x,res;
	s=(n>>2)&0x03;
	d=(n>>6)&0x03;
	x=s^d;
	x=(x<<2|x<<6);
	res=x^n;

	
		printf("%x\n",res);
	
	

		


	
}

