#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd,ret;
	char ch1,ch2;
	fd=open("temp",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	printf("file opened successfully...\n");
	read(fd,&ch1,1);
	printf("ch1=%c\n",ch1);
	ret=lseek(fd,-5,SEEK_END);
	printf("ret=%d\n",ret);
	read(fd,&ch2,1);
	printf("ch2=%c\n",ch2);
}
