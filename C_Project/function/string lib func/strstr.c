#include<stdio.h>
#include<string.h>
int main()
{
	char m[20],s[20];
	printf("Enter the main string\n");
	scanf("%s",m);
	printf("Enter the sub string\n");
	scanf("%s",s);
	char *p=strstr(m,s);
	if(p==NULL)
		printf("Sub string doesn't found\n");
	else 
		printf("Sub string found at %s\n",p);
}
