#include<stdio.h>
int main()
{
int x=10,y=20,z;
int *p=&y;
z=*--p;
//printf("%p\n",&x);
printf("%d %d %d %d",x,y,z,*p);
}
