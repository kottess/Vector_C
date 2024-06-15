#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd;
	char ch;
	fd=open("temp",O_RDONLY); 
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	printf("file opened successfully...\n");
	while(read(fd,&ch,1)>0) 
		printf("%c",ch);
}
