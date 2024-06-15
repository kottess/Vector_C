#include<stdio.h>
int main()
{
char a[20][30];
int i,j,r;
printf("Enter no of string\n");
scanf("%d",&r);
printf("Enter %d string\n",r);
for(i=1;i<=r;i++)
	scanf("%s",a[i]);

printf("\nOdd positioned string\n");
	for(i=1;i<=r;i++)
	{
		if(i%2!=0)
		printf("%s ",a[i]);
	}
printf("\n");
}
