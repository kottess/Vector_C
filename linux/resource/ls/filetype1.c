#include<stdio.h>
#include<sys/stat.h>
#include<dirent.h>
#include<time.h>
#include<string.h>
void print(int);
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage:./a.out dir\n");
		return 0;	
	}
	struct stat v;
	struct dirent *p;
	DIR *dp;
	int i;
	dp=opendir(argv[1]);
	if(dp==NULL)
	{
		perror("opendir");
		return 0;	
	}
	while(p=readdir(dp))
	{
		stat(p->d_name,&v);
			if(p->d_type==4) 
				printf("d");
			else if(p->d_type==8)
				printf("-");		
			else if(p->d_type==10)
				printf("l");
			else if(p->d_type==DT_FIFO)
				printf("p");
			else if(p->d_type==DT_SOCK)
				printf("s");
			else if(p->d_type==DT_CHR)
				printf("c");	
			else if(p->d_type==DT_BLK)
				printf("b");
			else
				printf(" ");
			print((int)v.st_mode);
			printf(" ");
			printf("%2d ",(int)v.st_nlink);
			printf("%5u ",(unsigned int)v.st_uid);
			printf("%5u ",(unsigned int)v.st_gid);
			printf("%5d ",(int)v.st_size);
			printf("%-s",ctime(&v.st_mtime));
			printf("%-5s\n",p->d_name);
	}
	printf("\n");
}

void print(int n)
{
	int i;
	for(i=8;i>=0;i--)
	{
		if(i==8||i==5||i==2)
		{ 
			if(n&1<<i)
				printf("r");
			else
				printf("-");	
		}
		if(i==7||i==4||i==1)
		{ 
			if(n&1<<i)
				printf("w");
			else
				printf("-");	
		}		
		if(i==6||i==3||i==0)
		{ 
			if(n&1<<i)
				printf("x");
			else
				printf("-");	
		}
	}
}

