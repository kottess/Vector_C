#include<unistd.h>
#include<stdio.h>
int main()
{
	if(fork()==0)
	{
		printf("Child process pid %d\n",getpid());
		sleep(2);
		printf("Child terminated\n");	
	}
	else
	{
		sleep(40);
		printf("Parent process pid %d\n",getpid());
		printf("Parent terminated\n");	
	}
}
