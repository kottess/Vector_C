#include<stdio.h>
int main()
{
	char s[20],d[20];
	int i,f,j,n;
	printf("Enter the string:\n");
	scanf("%[^\n]",s);
	printf("Enter the n value:\n");
	scanf("%d",&n);
	
	f=sizeof d/sizeof d[0]; 

	if(n>f)
	{
		printf("invalid memory\n");
		return 0;
	}

	for(i=0;i<n;i++)
		d[i]=s[i];
	d[i]='\0';
	printf("destination string =%s\n",d);
}
