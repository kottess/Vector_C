#include<stdio.h>
int main()
{
int n,i,p1=0,p2=31,x,y,z;
printf("Enter the n value:");
scanf("%d",&n);
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");
for(p1,p2;p1<p2;p1++,p2--)
{
x=n>>p1&1;
y=n>>p2&1;
if(x!=y)
{
//n=n^1<<p1;
//n=n^1<<p2;
z=x^y;
n^=(z<<p1)^(z<<p2);
}
}
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");
printf("Reversed num is %d\n",n);

}
