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
	for(i=0;p[i];i++)
	{
		if(p[i]==q[0])
		{
			for(j=1;q[j];j++)
			{
				if(q[j]!=p[i+j])
					break;			
			}
			if(q[i]=='\0')
				return q;
		}	
	}
	return NULL;
}
