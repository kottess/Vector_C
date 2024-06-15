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
	printf("fd1:%d\n",fd1);
	fd2=dup2(fd1,9);
	printf("fd2:%d\n",fd2);
}
