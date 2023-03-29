#include<stdio.h>
#define BIG(x,y) (x>y?x:y)
int main()
{
int x,y;
printf("enter the number\n");

scanf("%d%d",&x,&y);

printf("%d\n",BIG(x,y));


}

