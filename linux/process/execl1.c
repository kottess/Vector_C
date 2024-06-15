#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	printf("pid %d ppid %d\n",getpid(),getppid());	
	execl("./p1","p1",NULL);
	printf("after execution\n");
}
