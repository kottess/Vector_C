#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int a[5],i;
	srand(getpid());
	for(i=0;i<5;i++)
		a[i]=rand()%100;
	printf("Random number values\n");
	for(i=0;i<5;i++)
		printf("%d\n",a[i]);
}
