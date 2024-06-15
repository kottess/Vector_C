#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	if(fork()==0)
	{
		printf("in child\n");
		sleep(5);
		printf("child exit\n");
		exit(0);	
	}
	else
	{
		int s;
		waitpid(-1,&s,WNOHANG);
		printf("s=%d\n",s);	
	}
}
