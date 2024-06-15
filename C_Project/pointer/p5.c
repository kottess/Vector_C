#include<stdio.h>
int main()
{
int x=10,y=20,z;
int *p=&x;
*(p+2)=30;
printf("%p %p %p\n",p,p+1,p+2);
printf("%d %d %d %d\n",x,y,z,*p);
}
