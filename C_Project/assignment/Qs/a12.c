#include<stdio.h>
int main()
{
char a[20][30];
int i,j,r,f=1;
printf("Enter no of string\n");
scanf("%d",&r);
printf("Enter %d string\n",r);
for(i=0;i<r;i++)
	scanf("%s",a[i]);
for(i=0;i<r;i++)
	printf("%s ",a[i]);
printf("\n");

if(r%2==0)
f=0;
else
f=1;
for(i=r-1;(i>=0);i--)
{
	if(f)
	printf("%s ",a[i]);
	f=!f;
}
printf("\n");
}

