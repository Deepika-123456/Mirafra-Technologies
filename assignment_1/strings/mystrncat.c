#include<stdio.h>
#include<string.h>
void mystrncat(char d[],char s[],int n)
{
int i,j;
n=3;
for(i=0;s[i]!='\0';i++);
for(j=0;j<n;j++)
{
s[i++]=d[j];
}
}
void mystrncat(char d[],char s[],int n);
int main()
{
int n;
char s[100]="kernel";
char d[100]="masters";
mystrncat(d,s,n);
printf("%s\n",s);
}
