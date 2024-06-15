#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd,i;
	int a[5];
	close(0);
	fd=open("test",O_RDONLY);
	//fd=open("test",O_WRONLY|O_CREAT|O_TRUNC,0664);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("reading data from file...\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
}
