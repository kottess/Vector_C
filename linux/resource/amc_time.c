#include<stdio.h>
#include<time.h>
#include<sys/stat.h>
int main(int argc,char *argv[])
{
	struct stat v;
	if(argc!=2)
	{
		printf("./a.out filename...\n");
		return 0;
	}
	stat(argv[1],&v);
	printf("atime=%lu\n",v.st_atime); 
	printf("atime=%s\n",ctime(&v.st_atime)); 
	
	printf("mtime=%lu\n",v.st_mtime);
	printf("mtime=%s\n",ctime(&v.st_mtime));
	
	printf("ctime=%lu\n",v.st_ctime);
	printf("ctime=%s\n",ctime(&v.st_ctime));
}
