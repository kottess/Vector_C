#include<unistd.h>
#include<stdio.h>
int main()
{
	if(fork()==0)
	{
		printf("Child process pid %d ppid %d\n",getpid(),getppid());
		sleep(5);
		printf("Child process pid %d ppid %d\n",getpid(),getppid());
		printf("Child terminated\n");	
	}
	else
	{
		sleep(2);
		printf("Parent process pid %d ppid %d\n",getpid(),getppid());
		printf("Parent terminated\n");	
	}
}
