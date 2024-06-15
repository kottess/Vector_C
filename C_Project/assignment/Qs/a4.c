#include<stdio.h>
#include<string.h>
int main()
{
char a[30],b[30],c[30]={0};
int i,j,k=0;
printf("Enter two strings\n");
scanf("%s%s",a,b);

for(i=0;b[i];i++)
	{
		for(j=0;a[j];j++)
		{
			if(a[j]==b[i])
			continue;
			else
			{
				c[k]=a[j];
				k++;
			}
		}
		c[k]='\0';
		strcpy(a,c);
		k=0;
	}
printf("%s\n",c);
}
