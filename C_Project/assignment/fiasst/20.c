#include<stdio.h>
char *str_rchr(char *,char);
int main()
{
	char str[50],ch;
	printf("Enter the string\n");
	scanf("%[^\n]",str);
	printf("Enter the character\n");
	scanf(" %c",&ch);
	char *ptr=str_rchr(str,ch);
	if(ptr==NULL)
		printf("char not found\n");
	else
		printf("Char found at %s\n",ptr);	
}
char *str_rchr(char *s,char c)
{
	int i;
	char *p=NULL;
	for(i=0;s[i];i++)
	{
		if(s[i]==c)
			p=s+i;
	}
	return p;	
}	
