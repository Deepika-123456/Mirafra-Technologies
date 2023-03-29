#include<stdio.h>
#include<string.h>

void mystrcat(char d[],char s[])
{
int j,i;
for(i=0;s[i]!=0;i++);

for(j=i-1;d[j]!=0;j--)
{
s[i]=d[j];
}
}

void mystrcat(char d[],char s[]);
int main()
{
char s[100]="deepika";
char d[100]="pinninti";
mystrcat(d,s);
printf("%s %s\n",s,d);
}

