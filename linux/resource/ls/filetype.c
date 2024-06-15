#include<stdio.h>
#include<sys/stat.h>
#include<dirent.h>
#include<time.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage:./a.out dir file\n");
		return 0;	
	}
	struct stat v;
	struct dirent *p;
	DIR *dp;
	dp=opendir(argv[1]);
	if(dp==NULL)
	{
		perror("opendir");
		return 0;	
	}
	
	
	while(p=readdir(dp))
	{
		printf("%s ",p->d_name);
		stat(p->d_name,&v);
		if(S_ISREG(v.st_mode))
			printf("r ");
		else if(S_ISDIR(v.st_mode))
			printf("d ");
		else if(S_ISLNK(v.st_mode))
			printf("l ");
		else
			printf("p ");
		
		printf("%ld ",v.st_blksize);
		printf("%ld ",v.st_size);
		printf("%s ",ctime(&v.st_mtime));
		//printf("\n");
		
	}
	
}

