#include<stdio.h>
#include<string.h>
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
	strncat(d,s,n);
	printf("d-%s\n",d);
}
