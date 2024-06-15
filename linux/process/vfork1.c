#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	printf("hi\n");
	vfork();
	printf("hello\n");
	return 0;
	exit(0);
}
