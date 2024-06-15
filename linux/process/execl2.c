#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	printf("hi\n");	
	execl("/bin/cal","cal",NULL);
	perror("execl");
	printf("after execution\n");
}
