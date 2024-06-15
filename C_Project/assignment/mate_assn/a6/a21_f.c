#include<stdio.h>
char *my_strrev(char *);
int main()
{
	char s[30];
	printf("Enter string\n");
	scanf("%[^\n]",s);
	char *p=my_strrev(s);
	printf("Rev string %s\n",p);
}
char *my_strrev(char *p)
{
	int i,j,n; char temp;
 	for(n=0;p[n];n++);
	
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
	return p;
}
