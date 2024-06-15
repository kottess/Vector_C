#include<stdio.h>
char *str_ncpy(char *,char *,int);
int main()
{
	char src[50],dst[50];
	int n;
	printf("Enter the sourse string\n");
	scanf("%[^\n]",src);
	printf("Enter the n value\n");
	scanf("%d",&n);
	str_ncpy(dst,src,n);
	printf("Destination string\n%s\n",dst);
}
char *str_ncpy(char *d,char *s,int n)
{
	int i;
	for(i=0;(s[i])&&(i<n);i++)
		d[i]=s[i];
	d[i]='\0';
	return d;
}
