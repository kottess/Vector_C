#include<stdio.h>
#include<unistd.h>
int main()
{
	char *ap[]={"ls","-l",NULL};
	printf("hello\n");
	execvp("ls",ap);
	printf("hi\n");
}
