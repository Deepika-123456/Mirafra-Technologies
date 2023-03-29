#include<stdio.h>
int main()
{
int x;
printf("enter the number\n");
scanf("%d",&x);
if((x&1)==0)
printf("even");
else
printf("odd");
}
