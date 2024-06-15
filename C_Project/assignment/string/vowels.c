#include<stdio.h>
int main()
{
int i;
char a[30];
printf("Enter the string\n");
scanf("%s",a);
for(i=0;a[i];i++)
{
switch(a[i])
{
case 'a': case 'e': case 'i': case 'o': case 'u': 
case 'A': case 'E': case 'I': case 'O': case 'U':
printf("%c",a[i]);
}
}
printf("\n");
}
