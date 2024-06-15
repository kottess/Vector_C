#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the values:");
scanf("%d%d%d",&x,&y,&z);
if((x>y)&&(x>z))
printf("x is greater-%d\n",x);
if((y>x)&&(y>z))
printf("y is greater-%d\n",y);
if((z>x)&&(z>y))
printf("z is greater-%d\n",z);
if((x==y)&&(y==z))
printf("all are same-%d\n",x);
else
{
if(x==y)
{
if(x>z)
printf("x and y are same & greater-%d\n",x);
else
printf("x and y are same-%d\n",x);
}
if(y==z)
{
if(y>x)
printf("y and z are same & greater-%d\n",y);
else
printf("y and z are same-%d\n",y);
}
if(x==z)
{
if(x>y)
printf("x and z are same & greater-%d\n",x);
else
printf("x and z are same-%d\n",x);
}
}
}
