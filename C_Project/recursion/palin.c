#include<stdio.h>
void palin(int *);
int main()
{
int i,a[10];
printf("Enter the number\n");
for(i=0;i<10;i++)
scanf("%d",a+i);
palin(a);
printf("\n");
}
void palin(int *p)
{
static int i=0;
int k,s;
k=p[i];
if(i<10)
{
for(;k!=0;)
{
s=s*10+(k%10);
k/=10;
}
if(s==p[i])
printf("%d ",p[i]);
i++;
palin(p);
}
}
