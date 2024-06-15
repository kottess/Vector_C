#include<stdio.h>
#include<unistd.h>
int main()
{
	int r;
	printf("hi\n");
	r=fork();
	if(r==0)
	{
		printf("child pid %d\n",getpid());
	}
	else
	{
		printf("parent pid %d\n",getpid());
	}
}
