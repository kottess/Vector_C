#include<stdio.h>
#include<sys/stat.h>
int main(int argc,char *argv[])
{
	struct stat v;
	if(argc!=2)
	{
		printf("./a.out filename\n");
		return 0;
	}
	stat(argv[1],&v);
	//lstat(argv[1],&v);
	printf("st_mode member info:%o\n",v.st_mode);
	if((v.st_mode & 0170000)==0100000)
		printf("regular file...\n");
	else if((v.st_mode & 0170000)==0040000)
		printf("dir file...\n");
	else if((v.st_mode & 0170000)==0120000)
		printf("link file..\n");
	else
		printf("pipe file...\n");
	
}
/*
	100664
	170000
	--------
	100000
*/
