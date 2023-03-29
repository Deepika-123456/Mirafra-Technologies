#include<stdio.h>
void mystrreplace(char s[],char c1,char c2)
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c1)	
			s[i]=c2;
	}
	printf("%s",s);
}
void mystrreplace(char s[],char c1,char c2);
int main()
{
	char c1,c2;
	char s[20]="deepikapinninti";
	printf("enter a character for replace \n");
	scanf("%c",&c1);
	printf("enter a character to replace \n");
	getchar();
	scanf("%c",&c2);
	mystrreplace(s,c1,c2);

}

