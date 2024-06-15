#include<stdio.h>
int main()
{
int x=2,y=3,temp;
printf("Before Swapping:\n x=%d y=%d\n",x,y);
temp=y;
y=x;
x=temp;
printf("After Swapping:\n x=%d y=%d\n",x,y);
}
