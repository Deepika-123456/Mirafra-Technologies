#include<stdio.h>
int mystrchr(char s[],char c)
{
	int i,j;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c)
		{
			j=i;
		}

	}
		return j;
}
int mystrchr(char s[], char c);
int main()
{
	int i;
	char c;
	char s[50]="kernel";
	printf("enter a character\n");
	scanf("%c",&c);
	printf("%d\n",mystrchr(s,c));
}
