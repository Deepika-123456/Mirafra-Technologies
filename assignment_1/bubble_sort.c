#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];

	printf("enter the elements\n");

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{

	for(j=0;j<n-1-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	printf("%d\n",arr[i]);
}
}
