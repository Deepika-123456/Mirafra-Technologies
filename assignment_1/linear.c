#include<stdio.h>

int linear_search(int arr[],int size,int n);
int main()
{
	int n,size;
	printf("enter the n elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the size\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to search\n");
	scanf("%d",&size);
	linear_search(arr,size,n);
}

int linear_search(int arr[],int size,int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==size)
		{
			printf("found %d\n",i);
			s=1;
		}
		
	}
	if(s==0)
	printf("not found\n");
	
}
