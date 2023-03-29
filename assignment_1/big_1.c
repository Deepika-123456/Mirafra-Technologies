#include<stdio.h>
#define BIG(x,y,z) (x>y?(x>z?x:z):(y>z?y:z))
int main()
{
int x,y,z;
printf("enter the number\n");
scanf("%d%d%d",&x,&y,&z);
printf("%d\n",BIG(x,y,z));
}

