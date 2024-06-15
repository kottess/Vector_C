#include<stdio.h>
#include<sys/stat.h>
void print(int n)
{
	int i;
	scanf("%d",&i);
	printf("%d\n %d\n",n,n&1<<i);

}
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
	print((int) v.st_mode);
	printf("%d %o\n",(int)v.st_mode,v.st_mode);
	if(S_ISREG(v.st_mode))
		printf("reg file..\n");
	else if(S_ISDIR(v.st_mode))
		printf("dir file...\n");
	else if(S_ISLNK(v.st_mode))
		printf("link file...\n");
	else
		printf("pipe file...\n");
}
