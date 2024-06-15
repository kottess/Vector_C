#include<stdio.h>
char *my_strcat(char *,char *);
int main()
{
	char src[30],des[30];
	printf("Enter source string\n");
	scanf("%[^\n]",src);
	printf("Enter destination string\n");
	scanf(" %[^\n]",des);
	my_strcat(des,src);
	printf("destination string --> %s\n",des);	
}
char *my_strcat(char *q,char *p)
{
	int i,j;
	for(i=0;q[i];i++);
	
	for(j=0;p[j];i++,j++)
	{
		q[i]=p[j];
	}
	q[i]='\0';
	return q;	
}
