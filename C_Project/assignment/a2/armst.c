#include<stdio.h>
#include<math.h>
int main()
{
int n,r,s,t,t1,c,p;
for(n=1;n<=500;n++)
{
t=t1=n,s=0,c=0;
while(t1!=0)
{
t1/=10;
c++;
}
for(;t!=0;)
{
r=t%10;
p=pow(r,c);
s+=p;
t/=10;
}
if(s==n)
printf("%d ",n);
}
printf("\n");
}
