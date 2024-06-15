#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int x=10;
int main()
{
	if(vfork()==0)
	{
		printf("child\n");
		printf("x=%d\n",x);
		sleep(2);
		x=20;
		printf("x=%d\n",x);
		exit(0);
	}
	else
	{
		printf("parent x=%d\n",x);
	}
}
