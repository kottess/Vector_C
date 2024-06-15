#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the three values:");
scanf("%d%d%d",&x,&y,&z);
if((x==y)&&(y==z))
printf("x,y,z are same\n");
else if((x==y)&&(z<x))
printf("x,y are same & greater than z\n");
else if((x==z)&&(y<x))
printf("x,z are same & greater than y\n");
else if((z==y)&&(x<y))
printf("y,z are same & greater than x\n");
else if((x==y)&&(x<z))
printf("x,y are same & z is greater\n");
else if((x==z)&&(x<y))
printf("x,z are same & y is greater\n");
else if((z==y)&&(y<x))
printf("y,z are same & x is greater\n");
else if((y<x)&&(z<x))
printf("x is greater\n");
else if((x<y)&&(z<y))
printf("y is greater\n");
else if((x<z)&&(y<z))
printf("z is greater\n");
}
