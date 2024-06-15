#include<stdio.h>
char *rev(char *,int,int);
int main()
{
	char a[20];
	int n;
	printf("enter the string\n");
	scanf("%s",a);
	for(n=0;a[n];n++);
	char *r=rev(a,0,n-1);
	printf("%s\n",r);
}
char *rev(char *p,int i,int j)
{
	char temp;
	if(i<j)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
		i++; j--;
		return rev(p,i,j);
	}
	return p;
}
