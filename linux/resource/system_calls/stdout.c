#include<stdio.h>
#include<unistd.h>
int main()
{
	int i=0;
	while(1)
	{
		printf("hello\n");
		sleep(1);
		i++;
		if(i==3)
			close(1);
	}
}
