#include<stdio.h>
char *my_strncpy(char *,char *,int);
int main()
{
	char s[20],d[20]; int n;
	printf("Enter the source\n");
	scanf("%s",s);
	printf("Enter the n value\n");
	scanf("%d",&n);
	my_strncpy(d,s,n);
	d[n]='\0';
	printf("Destination-%s\n",d);
}
char *my_strncpy(char *q,char *p,int n)
{
	int i;
	for(i=0;(i<n)&&p[i];i++)
		q[i]=p[i];
	q[i]='\0';
	return q;
}
