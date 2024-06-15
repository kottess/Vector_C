#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd,i;
	int a[5]={10,20,30,40,50};
	close(1);
	fd=open("test",O_WRONLY|O_CREAT|O_TRUNC,0664);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
}
