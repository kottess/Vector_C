#include<stdio.h>
#include<string.h>
int main()
{
char m[5][30],s[30];
int i;
printf("Enter the lines\n");
for(i=0;i<5;i++)
scanf("%[^\n]",m[i]);
printf("Enter the string\n");
scanf(" %[^\n]",s);
for(i=0;i<5;i++)
{
char *p=strstr(m[i],s);
if(p==NULL)
continue;
else
printf("%s\n",m[i]);
}
}
