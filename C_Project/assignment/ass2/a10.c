#include<stdio.h>
int strcmp(char *,char *);
int main()
{
char a[50],b[50];
printf("Enter 1st string\n");
scanf("%[^\n]",a);
printf("Enter 2nd string\n");
scanf(" %[^\n]",b);
int p=strcmp(a,b);
if(p==0)
printf("Strings are equal\n");
else if(p<0)
printf("2nd String is greater\n");
else
printf("1st String is greater\n");
}
int strcmp(char *p,char *q)
{
int i;
for(i=0;p[i]&&q[i];i++)
{
if(p[i]!=q[i])
break;
}
return p[i]-q[i];
}
