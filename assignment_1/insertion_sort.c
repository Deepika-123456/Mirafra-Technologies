#include<stdio.h>
#define MAX 5
void inser_sort(int arr[]);
int main()
{
	int arr[5]={7,3,5,2,1};
	printf("n=%d",MAX);
	inser_sort(arr);
}
void inser_sort(int arr[])
{
	int i,j,temp=0;
	for(i=1;i<MAX;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0&&arr[j]>temp;j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
	for(i=0;i<5;i++)
		printf("\n%d\n",arr[i]);
}

