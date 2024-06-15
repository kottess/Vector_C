#include<stdio.h>
#include<string.h>
int main()
{
char a[50],b[50],temp;
int i,j,k;
printf("Enter the string\n");
scanf("%[^\n]",a);
printf("Enter the word to reverse\n");
scanf(" %s",b);

for(i=0,j=0;a[i]&&b[j];i++)
	{
	if(a[i]==b[j])
	while(a[i]==b[j]) j++;
	}	
for(i=i-1;a[i]!=' '&&i>=0;i--);

k=i+1;
j=k+j-1;

for(k,j;k<j;k++,j--)
	{
	temp=a[k];
	a[k]=a[j];
	a[j]=temp;
	}
printf("%s\n",a);
}
