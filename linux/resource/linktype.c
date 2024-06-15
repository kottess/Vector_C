#include<stdio.h>
#include<sys/stat.h>
int main(int argc,char *argv[])
{
	struct stat v1,v2;
	if(argc!=3)
	{
		printf("./a.out file1 file2\n");
		return 0;
	}
	stat(argv[1],&v1);
	stat(argv[2],&v2);
	if(v1.st_ino==v2.st_ino)
	{
		lstat(argv[1],&v1);
		lstat(argv[2],&v2);
		if(v1.st_ino==v2.st_ino)
			printf("hard link..\n");
		else
			printf("soft link...\n");
	}
	else
		printf("no link...\n");
}
