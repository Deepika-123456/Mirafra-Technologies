#include<stdio.h>
int main()
{
	int n,counter=0,i,j;
	printf("enter the number");
	scanf("%d",&n);
	printf("prime number list from 1 to%d\n",n);
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
			printf("\n");
}		
