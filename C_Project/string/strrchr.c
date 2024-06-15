#include<stdio.h>
char *strrchr(char *,int);
int main()
{
char s[20],c;
printf("Enter the string:\n");
scanf("%[^\n]",s);
printf("Enter the character:\n");
scanf(" %c",&c);
char *p=strrchr(s,c);
}
char *strrchr(char *s,int c)
{
int i;
//char *q=NULL;
for(i=0;s[i];i++)
{
if(s[i]==c)
// q=s+i;
return s+i;
}
return NULL;
}
