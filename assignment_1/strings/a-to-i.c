#include<stdio.h>
int atoi(char s[]);
int main()
{
	char s[10]="256";
	printf("ascii to integer %d",atoi(s));
}
int atoi(char s[])
{
	int i,sum=0;
	for(i=0;s[i]!=0;i++)
	{
		sum =sum*10+s[i]-48;
	}
	return sum;
}

