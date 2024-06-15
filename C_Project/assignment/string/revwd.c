#include<stdio.h>
int main()
{
	char a[30],temp;
	int i,j,k;
	printf("Enter the string\n");
	scanf("%[^\n]",a);
	for(i=0;a[i];i++)
	{
		for(j=i;a[j]!=' '&&a[j];j++);
		k=j;
		j=j-1;
		for(;i<j;i++,j--)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		i=k;
	}
	printf("%s\n",a);
}
