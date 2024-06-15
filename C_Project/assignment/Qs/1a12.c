#include<stdio.h>
#include<string.h>
int main()
{
char a[10][30],temp;
int i,j,r,f=1,x,len;

printf("Enter no of string\n");
scanf("%d",&r);

printf("Enter %d string\n",r);
for(i=0;i<r;i++)
	scanf("%s",a[i]);
for(i=0;i<r;i++)
	printf("%s ",a[i]);
printf("\n");

for(i = 0;i < r;i++)
	{
	       len=strlen(a[i]);
		if(f)
			{
		        for(j=0,x=len-1;j < x;j++,x--)
				{
			            temp = a[i][j];
			            a[i][j] = a[i][x];
			            a[i][x] = temp;
				}
			}
		f=!f;
	}
printf("Alternate string in reverse\n");
for(i=0;i<r;i++)
	printf("%s ",a[i]);
printf("\n");
}


