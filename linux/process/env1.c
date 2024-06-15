#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[],char *env[])
{
	int i;
	printf("before image\n");
	for(i=0;env[i];i++)
	{
		printf("%s\n",env[i]);
	}
	printf("after image\n");
	execl("p1","p1",NULL);
	perror("execlp");
	printf("bye\n");
}
