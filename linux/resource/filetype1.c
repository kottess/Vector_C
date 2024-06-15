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
	if(S_ISREG(v.st_mode))
		printf("reg file..\n");
	else if(S_ISDIR(v.st_mode))
		printf("dir file...\n");
	else if(S_ISLNK(v.st_mode))
		printf("link file...\n");
	else
		printf("pipe file...\n");
}
