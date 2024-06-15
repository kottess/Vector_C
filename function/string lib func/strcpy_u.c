#include<stdio.h>
char *my_strcpy(char *,char *);
int main()
{
	char s[20],d[20];
	printf("Enter the source\n");
	scanf("%s",s);
	my_strcpy(d,s);
	printf("Destination-%s\n",d);
}
char *my_strcpy(char *q,char *p)
{
	int i;
	for(i=0;p[i];i++)
		q[i]=p[i];
	q[i]='\0';
	return q;
}
