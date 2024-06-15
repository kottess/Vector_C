#include<stdio.h>
char *my_strrev(char *,int,int);
int main()
{
	char s[30];
	int n;
	printf("Enter string\n");
	scanf("%[^\n]",s);
	
	for(n=0;s[n];n++);
	char *p=my_strrev(s,0,n-1);
	printf("Rev string %s\n",p);
}
char *my_strrev(char *p,int i,int j)
{
	char temp;
 	if(i<j)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
		i++;
		j--;
		my_strrev(p,i,j);
	}
	return p;
}
