#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd1,fd2;
	fd1=open("temp",O_WRONLY|O_CREAT|O_TRUNC,0664);
	if(fd1<0)
	{
		perror("open");
		return 0;
	}
	printf("fd1=%d\n",fd1);
	close(1);
	fd2=dup(fd1);
	execlp("date","date",NULL);
	printf("after execlp..\n");
}
