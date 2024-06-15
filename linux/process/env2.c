#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[],char *env[])
{
	int i;
	char *en[]={"USER=jarvis","HOME=/home/chennai",NULL};
	printf("before image\n");
	for(i=0;env[i];i++)
	{
		printf("%s\n",env[i]);
	}
	printf("after image\n");
	execle("./p2","p2",NULL,en);
	perror("execlp");
}
