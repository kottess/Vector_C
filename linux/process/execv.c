#include<stdio.h>
#include<unistd.h>
int main()
{
	char *ap[]={"ls","-l",NULL};
	printf("hello\n");
	execv("/bin/ls",ap);
	printf("hi\n");
}
