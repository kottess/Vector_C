#include<stdio.h>
#include<unistd.h>
int main()
{
	int r;
	printf("hi\n");
	r=fork();
	if(r==0)
	{
		printf("Child pid %d\n",getpid());
		sleep(2);
		printf("Child termiates\n");			
	}
	else
	{
		printf("Parent pid %d\n",getpid());
		sleep(6);
		printf("Parent termiates\n");			
	}
}
