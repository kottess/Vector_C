#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the values:");
scanf("%d%d%d",&x,&y,&z);
if((x>y)&&(x>z))
printf("x is greater\n");
if((y>x)&&(y>z))
printf("y is greater\n");
if((z>x)&&(z>y))
printf("z is greater\n");
if((x==y)&&(y==z))
printf("all are same\n");
else
{
if(x==y)
{
if(x>z)
printf("x and y are same & greater\n");
else
printf("x and y are same\n");
}
if(y==z)
{
if(y>x)
printf("y and z are same & greater\n");
else
printf("y and z are same\n");
}
if(x==z)
{
if(x>y)
printf("x and z are same & greater\n");
else
printf("x and z are same\n");
}
}
}
