#include<stdio.h>
int main()
{
char ch,a[30];
int i,j;
printf("Enter the string\n");
scanf("%[^\n]",a);
printf("Enter the character to remove\n");
scanf(" %c",&ch);
for(i=0;a[i];i++)
{
	if(a[i]==ch)
	{
		j=i;
		while(a[j])
		{
			a[j]=a[j+1];
			j++;
		}
		a[j]='\0';
		i--;
	}
}
printf("%s\n",a);
}
