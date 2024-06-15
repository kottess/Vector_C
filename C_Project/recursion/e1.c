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
{//fun(1+p);
//fun(p+1);
	printf("%c",*p);
fun(1+p);
//fun(p+1);
}}
