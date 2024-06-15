#include<stdio.h>
int main()
{
	char str[30]; int i,j;
	printf("Enter the string\n");
	scanf("%[^\n]",str);
	for(i=0;str[i];i++)
	{
		if((str[i]==' ')&&(str[i+1]==' '))
		{
			for(j=i;j<str[j];j++)
				str[j]=str[j+1];
			i--;
		}
	}
	printf("%s\n",str);
}
