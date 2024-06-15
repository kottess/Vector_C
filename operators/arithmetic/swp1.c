#include<stdio.h>
int main()
{
int x=20,y=31,a=24,b=54;
printf("Before Swapping:\n x=%d y=%d\n",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("After Swapping:\n x=%d y=%d\n",x,y);
printf("Before Swapping:\n a=%d b=%d\n",a,b);
a=a*b;
b=a/b;
a=a/b;
printf("After Swapping:\n a=%d b=%d\n",a,b);
}
