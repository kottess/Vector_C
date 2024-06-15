#include<stdio.h>
#include<string.h>
int main()
{
char a[30],b[10][30],c[20]; 
int i,j=0,k=0,r=0,len;
printf("enter the string\n");
scanf("%[^\n]",a);

for(i=0;a[i];i++)
{
	if(a[i]==' ')
	{
		b[j][k]='\0';
		j++;
		k=0;
	}
	else
	{
		b[j][k]=a[i];
		k++;
	}
	b[j][k]='\0';
	if(a[i]==' ')
	r++;
	
}
r+=1;
for(i=0;i<r;i++)
{
if(strlen(b[i])<strlen(b[i+1]))
strcpy(c,b[i]);
else
strcpy(c,b[i]);
}
printf("Smallest substring is:\n%s\n",c);
}
