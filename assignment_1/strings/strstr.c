#include<stdio.h>
int stringstr(char s[],char sub[]);
int strlen(char str[]);
int main()
{
	char s[10],sub[20];
	int a,n;
	printf("enter the string \n");
	scanf("%19[^\n]",s);
	printf("enter a sub string \n");
	scanf("%s",sub);
	n=strlen(sub);
	a=stringstr(s,sub);
	printf("%d\n",a-n);
}
int stringlen(char sub[])
{
	int i;
	for (i=0;sub[i]!=0;i++);
		return i;
}
int strlen(char str[])
{
	int i,j;
	for(i=0;j=0;s[i]!=0;i++)
	{
		if(s[i]==sub[j])
			j++;
		else
			j=0;
		if(sub[j]==0)
			return i+1;
	}
}

