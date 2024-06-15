#include<stdio.h>
int main()
{
char a[20],b[20];
int i=0,j=0;
printf("Enter the string:\n");
scanf("%[^\n]",a);

while(a[i]!='\0')
{
if(!(a[i]==' '&&a[i+1]==' '))
{
b[j]=a[i];
j++;
}
i++;
}
b[j]='\0';
printf("After removing consecutive spaces:\n");
printf("%s\n",b);
}
