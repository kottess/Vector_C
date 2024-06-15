#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,*p=(int *)calloc(5,sizeof(int));
printf("Enter 5 numbers\n");
	for(i=0;i<5;i++)
		scanf("%d",&p[i]);

	for(i=0;i<5;i++)
		printf("%d ",p[i]);
printf("\n");
free(p);
}
