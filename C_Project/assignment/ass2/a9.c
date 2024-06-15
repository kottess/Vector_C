#include<stdio.h>
char *strstr(char *,char *);
int main()
{
char a[50],b[50];
printf("Enter the main string\n");
scanf("%[^\n]",a);
printf("Enter the sub string\n");
scanf(" %s",b);
char *p=strstr(a,b);
if(p=NULL)
printf("Sub string not found\n");
else
printf("Sub string found\n");
}

char *strstr(char *p,char *q)
{
int i,j,n;
for(n=0;q[n];n++);
for(i=0,j=0;p[i]&&q[i];i++)
{
if(p[i]==q[j])
j++;
else
j=0;
}
if(j==n)
return q;
else
return NULL;
}
