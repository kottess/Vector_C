#include<stdio.h>
char *my_strcpy(char *,char *);
int main()
{
	char src[30],des[30];
	printf("Enter source string\n");
	scanf("%[^\n]",src);
	my_strcpy(des,src);
	printf("destination string --> %s\n",des);	
}
char *my_strcpy(char *q,char *p)
{
	int i;
	for(i=0;p[i];i++)
	{
		q[i]=p[i];
	}
	q[i]='\0';
	return q;	
}
