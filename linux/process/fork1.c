#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("hi\n");
	fork();
	fork();
	fork();
	printf("pid %d ppid %d\n",getpid(),getppid());
	while(1);
}
