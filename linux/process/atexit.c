#include<stdio.h>
#include<stdlib.h>
void abc();
void def();
int main()
{
	printf("hello\n");
	atexit(abc);
	printf("hi\n");
	atexit(def);
	printf("bye\n");
	//exit(0);
	_exit(0);
}
void abc()
{
	printf("abc func\n");
	
}
void def()
{
	printf("def func\n");
	
}
