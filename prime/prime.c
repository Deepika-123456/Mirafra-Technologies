#include<stdio.h>
int main()
{
	int i,j,counter=0,n;
	printf("enter a number\n");
	scanf("%d",&n);
	printf("prime from 1 to %d\n",n);
	for(i=1;i<n;i++)
	{
		counter=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				counter++;
			}
		}
		if(counter==2)
			printf("%d\n",i);
	}
}
