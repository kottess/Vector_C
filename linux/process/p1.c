#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("In p1 process pid %d ppid %d\n",getpid(),getppid());
	//while(1);
}
