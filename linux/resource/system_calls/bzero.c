#include<stdio.h>
#include<fcntl.h>
#include<strings.h>
#include<unistd.h>
int main()
{
	int fd,ret;
	char buf[20];
	//bzero(buf,5);
	fd=open("temp",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	printf("file opened successfully...\n");
	read(fd,buf,5);
	printf("data:%s\n",buf); //sol2: using bzero function
}
