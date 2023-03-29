#include<stdio.h>
int main()
{
	int x;
	printf("enter the power");
	scanf("%d",&x);
	if((x&(x-1))==0)
	{
		printf("power");
	}
	else
	{
		printf("not power");
	}
}
