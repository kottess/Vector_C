#include<stdio.h>
int main()
{
int i,j,s,n,f;
printf("Enter value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1,f=1;j<=n+i-1;j++)
{
if(j<=n-i)
printf("  ");
else
{
if(f)
printf("A ");
else
printf("* ");
f=!f;
}
}
printf("\n");
}

}
