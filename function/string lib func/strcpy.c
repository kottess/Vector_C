#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],d[20];
	printf("Enter the source\n");
	scanf("%s",s);
	strcpy(d,s);
	printf("Destination-%s\n",d);
}
