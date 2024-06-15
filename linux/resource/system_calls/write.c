#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd,ret;
	char ch;
	fd=open("test",O_WRONLY|O_CREAT|O_TRUNC,0664);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	printf("fd:%d\n",fd);
	printf("file opened successfully..\n");
	printf("enter data to write into the file...\n");
	scanf("%c",&ch);
	ret=write(fd,&ch,1);
	if(ret<=0)
	{
		perror("write");
		return 0;
	}
	printf("data written into file..\n");
}
