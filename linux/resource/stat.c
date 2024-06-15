#include<stdio.h>
#include<sys/stat.h>
int main(int argc,char *argv[])
{
	struct stat v;
	if(argc!=2)
	{
		printf("./a.out file name\n");
		return 0;
	}
	//if(stat(argv[1],&v)<0)
	if(lstat(argv[1],&v)<0) //link file
	{
		perror("stat");
		return 0;
	}
	printf("sizeof the file:%ld\n",v.st_size);
	printf("inode number of file:%ld\n",v.st_ino);
}
