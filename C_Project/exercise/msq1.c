#include<stdio.h>
#include<unistd.h>
#include<sys/shm.h>
int main()
{
	int id;
	char *str="hello";
	char *p;
	id=shmget(5,20,IPC_CREAT|0664);
	if(id<0)
	{
		perror("shmget");
		return 0;
	}
	p=shmat(id,0,0);
	while(str)
	{
		*p=str;
		str++;	
		sleep(1);
	}
}

