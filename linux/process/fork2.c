#include<stdio.h>
#include<unistd.h>
int main()
{
	int r;
	printf("hi\n");
	r=fork();
	printf("r=%d\n",r);
}
