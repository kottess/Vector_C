#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd,ret;
	char buf[20];
	fd=open("temp",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	printf("file opened successfully...\n");
	ret=read(fd,buf,5);
	//buf[ret]='\0';
	printf("data:%s\n",buf);
}
