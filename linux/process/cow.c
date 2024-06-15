#include<stdio.h>
#include<unistd.h>
int g=10;
int main()
{
	if(fork()==0)	
	{
		printf("in child:->g=%d &g=%p\n",g,&g); //g=10
		g=20;
		printf("g value modified by child process\n");
		sleep(2);
		printf("after modification in child:->g=%d &g=%p\n",g,&g);
		sleep(1);
		printf("child process terminates\n");
	}
	else
	{
		sleep(10);
		printf("in parent process..\n");
		printf("g value in parent:->g=%d &g=%p\n",g,&g);
		sleep(2);
		printf("parent process terminated\n");
	}
}
