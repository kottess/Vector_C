
#include<stdio.h>
int main()
{
int i,j;
double d;
printf("Enter the value:");
scanf("%lf",&d);
char *p=(char *)&d;
p=p+7;
for(i=0;i<8;i++)
{
for(j=7;j>=0;j--)
printf("%d",*p>>j&1);
p--;
}
printf("\n");
}
