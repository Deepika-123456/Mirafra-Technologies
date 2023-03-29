#include<stdio.h>
#include<string.h>
void mystrupr(char s[])
 {
  int i=0;
  while(s[i]!='\0')
{
if(s[i]>=90&&s[i]<=122)
{
 s[i]=s[i]-32;
}
i++;
}
}
int main()
{
char s[]="kErnEl";
mystrupr(s);
printf("%s\n",s);
}
