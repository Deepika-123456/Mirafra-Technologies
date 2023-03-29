#include<stdio.h>
int main()
{
	int num,decimalnum=0,rem,base=1;
	printf("enter the number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		decimalnum+=rem*base;
		base*=2;
		num/=10;
	}
	printf("the number is %d",decimalnum);
	return 0;
}

