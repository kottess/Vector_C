#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	if(fork()==0)
	{
		printf("In child pid %d\n",getpid());
		sleep(5);
		printf("child terminated\n");	
    	exit(3);	
    }
	else
	{
		int i;
		wait(0);
		//wait(&i);
		i=i>>8;
		printf("%d\n",i);
		printf("Parent process terminated\n");
	}
}
