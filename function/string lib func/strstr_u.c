#include<stdio.h>
char *my_strstr(char *,char*);
int main()
{
	char m[20],s[20];
	printf("Enter the main string\n");
	scanf("%s",m);
	printf("Enter the sub string\n");
	scanf("%s",s);
	char *p=my_strstr(m,s);
	if(p==NULL)
		printf("Sub string doesn't found\n");
	else 
		printf("Sub string found at %s\n",p);
}
char *my_strstr(char *p,char *q)
{
	int i,j,n,k;
	for(n=0;q[n];n++);
	for(i=0,j=0;p[i]&&q[j];i++)
	{
		if(p[i]==q[j])
		{
			j++;
			k=i;
		}	
		else
			j=0;
	}
	k=k-n+1;
	if(j==n)
		return p+k;
	else
		return NULL;
}
