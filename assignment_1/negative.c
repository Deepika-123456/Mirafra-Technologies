#include<stdio.h>
int main()
{
int x;
printf("enter the number\n");
scanf("%d",&x);
if(((x>>31)&1)==1)
printf("negative");
else
printf("positive");
}
