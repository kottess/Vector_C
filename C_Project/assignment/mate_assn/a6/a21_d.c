#include<stdio.h>
char *my_strstr(char *,char *);
int main()
{
	char m[30],s[30];
	printf("Enter main string\n");
	scanf("%[^\n]",m);
	printf("Enter sub-string\n");
	scanf(" %[^\n]",s);
	char *p=my_strstr(m,s);
	if(p==NULL)
		printf("Sub string not found\n");
	else
		printf("Sub string found\n");	
}
char *my_strstr(char *p,char *q)
{
	int i,j,n;
	for(n=0;q[n];n++);
	
	for(i=0,j=0;p[i]&&q[j];i++)
	{
		if(p[i]==q[j])
			j++;
		else
			j=0;
	}
	if(j==n)
		return q;	
	else 
		return NULL;
}
