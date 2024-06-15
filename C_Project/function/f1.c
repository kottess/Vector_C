#include<stdio.h>
void fun(char *);
int main()
{
fun("vector");
printf("\n");
}
void fun(char *p)
{
if(*p)
{
printf("%c ",*p);
fun(p++);
}
}
