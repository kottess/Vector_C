#include<stdio.h>
char *strrev(char *,int,int);
int main()
{
char a[30];
int n;
printf("Enter the string\n");
scanf("%[^\n]",a);
for(n=0;a[n];n++);
char *r=strrev(a,0,n-1);
printf("%s\n",r);
}

char *strrev(char *p,int i,int j)
{
char temp;
if(i<j)
{
	temp=p[i];
	p[i]=p[j];
	p[j]=temp;
	i++,j--;
	return strrev(p,i,j);
}
return p;
}

