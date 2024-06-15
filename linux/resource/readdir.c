#include<stdio.h>
#include<dirent.h>
int main(int argc,char *argv[])
{
	struct dirent *p;
	DIR	*dp;
	if(argc!=2)
	{
		printf("./a.out dirname\n");
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
		printf("%s\n",p->d_name);
	}
}
