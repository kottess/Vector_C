#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	printf("hi\n");	
	execlp("cal","cal",NULL);
	perror("execlp");
	printf("after execution\n");
}
