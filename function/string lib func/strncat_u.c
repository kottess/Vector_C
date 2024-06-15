#include<stdio.h>
char *my_strncat(char*,char*,int);
int main()
{
	char s[20],d[20];
	int n;
	printf("Enter the sourse\n");
	scanf("%s",s);
	printf("Enter the destination\n");
	scanf("%s",d);
	printf("Enter the n value\n");
	scanf("%d",&n);
	my_strncat(d,s,n);
	printf("d-%s\n",d);
}
char *my_strncat(char *q,char *p,int n)
{
	int i,j;
	for(i=0;q[i];i++);
	for(j=0;j<n;i++,j++)
		q[i]=p[j];
	q[i]='\0';
	return q;
}
