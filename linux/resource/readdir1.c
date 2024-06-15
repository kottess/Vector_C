#include<stdio.h>
#include<dirent.h>
#include<string.h>
int main(int argc,char *argv[])
{
	struct dirent *p;
	DIR	*dp;
	if(argc!=3)
	{
		printf("./a.out dir file\n");
		return 0;
	}
	dp=opendir(argv[1]); 
	//opendir(".")->opens the current 	directory
	//opendir("..")->opens the parent directory
	if(dp==NULL)
	{
		perror("opendir");
		return 0;
	}
	while(p=readdir(dp)) 
	{
		if(!strcmp(argv[2],p->d_name))
		{
			printf("file found\n");
			return 0;
		}
	}
	printf("file not found\n");
}
