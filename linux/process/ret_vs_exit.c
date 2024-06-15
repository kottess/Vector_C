#include<stdio.h>
#include<stdlib.h>
void abc();
int main()
{
	printf("hi\n");
	abc();
	printf("hello\n");
	printf("main func completed\n");
}
void abc()
{
	printf("in abc func\n");
	//exit(0);
	return ;
	printf("after return\n");
}
