#include<stdio.h>
char *my_strchr(char *,char );
int main()
{
	char m[30],ch;
	printf("Enter string\n");
	scanf("%[^\n]",m);
	printf("Enter the character\n");
	scanf(" %c",&ch);
	char *p=my_strchr(m,ch);
	if(p==NULL)
		printf("char not found\n");
	else
		printf("char found at %s\n",p);	
}
char *my_strchr(char *p,char q)
{
	int i,j,n;

	for(i=0;p[i];i++)
	{
		if(p[i]==q)
			return p+i;			
	}
	return NULL;
}
