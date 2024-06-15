#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd;
	close(1);
	fd=open("test",O_WRONLY|O_CREAT|O_TRUNC,0664);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	printf("hello\n");
	printf("bye\n");
	printf("value of fd:%d\n",fd);
}
