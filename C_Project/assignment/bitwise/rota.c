#include<stdio.h>
int main()
{
int i,n,r,p,s,p1;
printf("Enter the number:");
scanf("%d",&n);
r=n;

for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");

printf("Enter the num of rotaion:");
scanf("%d",&p);
p1=p;

printf("left rotation:\n");
n=(n<<p)|(p&(n>>31));
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");

printf("right rotation:\n");
n=((r>>p1)|(~(r<<31-p1))|((r&1)<<31));
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");
}
