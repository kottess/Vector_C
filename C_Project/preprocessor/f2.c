#include<stdio.h>
int main()
{
//typedef int* INT_PTR;
#define INT_PTR int* 
int x=10,y=20;
INT_PTR p; INT_PTR q;
p=&x;q=&y;
printf("*p=%d *q=%d\n",*p,*q);
}
