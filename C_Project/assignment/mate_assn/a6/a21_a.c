#include<stdio.h>
int my_strcmp(char *,char *);
int main()
{
	char str1[30],str2[30];
	printf("Enter two string\n");
	scanf("%s %s",str1,str2);
	int r=my_strcmp(str1,str2);
	if(r==0)
		printf("Strings are equal\n");
	else if(r>0) 
		printf("String1 is greater,string2 is smaller\n");
	else
		printf("String2 is greater,string1 is smaller\n");	
}
int my_strcmp(char *p,char *q)
{
	int i;
	for(i=0;p[i]&&q[i];i++)
	{
		if(p[i]!=q[i])
			break;
	}
	return p[i]-q[i];	
}
