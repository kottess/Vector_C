//to check the entered character is present r not
#include<stdio.h>
int main()
{
char a[50],c;
int i,j,n;
printf("Enter the string:");
scanf("%[^\n]",a);
printf("%s\n",a);
for(n=0;a[n];n++);
printf("Enter the character:\n");
scanf(" %s",&c);
for(i=0;i<n;i++)
{
if(a[i]==c)
{
printf("Character %c is present:\n",c);
break;
}
} 
if(i==n)
printf("Character %c is not present:\n",c);
}
