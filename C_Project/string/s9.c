//src to des 
#include<stdio.h>
#include<string.h>
int main()
{
char *p;
char s[50];
char f[50];
printf("Enter sourse string:");
scanf(" %[^\n]",s);
printf("Enter the string to find:");
scanf(" %[^\n]",f);
p=strstr(s,f);
if(p==NULL)
printf("String not found\n");
else
printf("string is present\n");
}
