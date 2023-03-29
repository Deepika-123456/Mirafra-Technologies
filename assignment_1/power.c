#include<stdio.h>
void binary(char x);
int main()
{
	int x;
	printf("enter the number\n");
	scanf("%d",&x);
	binary(x);

}
void binary(char x)
{
	int b=0;
	for(int i=0;i<8;i++)
	{
		if(x&(0x80))
		{
			printf("1");
			b++;
		}
		else
		{
			printf("0");
		}
		x=x<<1;
	}
	printf("\n");
		printf("b=%d",b);
		if(b==1)
			printf("power");
		else
			printf("not power");
}
