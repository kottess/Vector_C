#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("hi ");
	fork();
	printf("hello");
}
