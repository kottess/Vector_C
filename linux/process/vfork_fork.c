#include<stdio.h>
#include<unistd.h>
int i=1;
int main()
{
	printf("hello\n");
	//vfork();
	fork();
	i++;
	printf("i=%d pid %d\n",i,getpid());
}
