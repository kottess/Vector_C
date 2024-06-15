#include<stdio.h>
int main()
{
int i,n,n1=0,x,p,p1;
printf("Enter the number:");
scanf("%d",&n);

for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");

printf("Enter the num of rotaion:");
scanf("%d",&p);

printf("right rotation:\n");

for(i=p-1, p1=31 ;i>=0 ;i--,p1--)
{
x=(n>>i)&1;
n1=n1|(x<<p1);
}
n=n>>p;
n=n|n1;

for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");
/*
printf("left rotation:\n");

for(i=31,p1=p-1;i>=i-p ;i--,p1--)
{
x=(n>>i)&1;
n1=n1(x<<p1);
}
n=n>>p;
n=n|n1;
*/

}
