#include<stdio.h>
int my_strncmp(char*,char*,int);
int main()
{
	char s1[20],s2[20];
	int n;
	printf("Enter the strings\n");
	scanf("%s %s",s1,s2);
	printf("Enter the n value\n");
	scanf("%d",&n);
	int r=my_strncmp(s1,s2,n);
	if(r==0)
		printf("String are equal\n");
	else if(r>0)
		printf("S1 is greater,S2 is smaller\n");
	else
		printf("S1 is smaller,S2 is greater\n");
}
int my_strncmp(char *p,char *q,int n)
{
	int i;
	for(i=0;(i<n)&&p[i]&&q[i];i++)
	{
		if(p[i]!=q[i])
			break;
	}
	return p[i-1]-q[i-1];
}
