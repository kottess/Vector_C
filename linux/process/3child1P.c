#include<stdio.h>
#include<unistd.h>
int main()
{
	if(fork()==0)
	{
		printf("child1 pid %d ppid %d\n",getpid(),getppid());
	}	
	else
	{
		if(fork()==0)
		{
			printf("child2 pid %d ppid %d\n",getpid(),getppid());
		}
		else
		{
			if(fork()==0)
			{
				printf("child3 pid %d ppid %d\n",getpid(),getppid());
			}
			else
				while(1);
		}
	}
}		
