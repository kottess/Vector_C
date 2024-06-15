#include<stdio.h>
#include<unistd.h>
int main()
{
	int i=0,j;
	while(1)
	{
	printf("hello..\n");
	scanf("%d",&j);
	printf("j=%d\n",j);
	i++;
	if(i==2)
		close(0);
	}
}
