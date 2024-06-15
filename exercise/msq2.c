#include<stdio.h>
#include<sys/shm.h>
int main()
{
	int id;
	char *str;
	char *p;
	id=shmget(5,20,IPC_CREAT|0664);
	if(id<0)
	{
		perror("shmget");
		return 0;
	}
	p=shmat(id,0,0);
	while(1)
	{
		str=*p;
		sleep(1);		
	}
	printf("%s\n",str);
}

