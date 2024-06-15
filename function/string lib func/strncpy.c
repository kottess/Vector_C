#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],d[20]; 
	int n;
	printf("Enter the source\n");
	scanf("%s",s);
	printf("Enter the n value\n");
	scanf("%d",&n);
	strncpy(d,s,n);
	d[n]='\0';
	printf("Destination-%s\n",d);
}
