#include<stdio.h>
int main()
{
char a[20],ch;
int i,n,j;
printf("Enter the string:\n");
scanf("%[^\n]",a);
for(n=0;a[n];n++);
printf("Enter the character:\n");
scanf(" %c",&ch);


for(i=0;a[i];i++)
{
if(a[i]==ch)
{	
for(j=i;j<n;j++)
{
a[j]=a[j+1];
}
i--;
}
}

printf("After removing the character %c:\n",ch);
printf("%s\n",a);
}
