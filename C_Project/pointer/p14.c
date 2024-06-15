#include<stdio.h>
int main()
{
int i,j;
char a[]="hai";
char b[]="hello";
char c[]="bye";
char *p[]={a[0]};
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%s",*(p[i]+j));
printf("\n");
}
}
