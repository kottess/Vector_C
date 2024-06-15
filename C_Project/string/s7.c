//src to des 
#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
char d[50];
int n;
printf("Enter sourse string:");
scanf(" %[^\n]",s);
printf("Enter the value:");
scanf("%d",&n);
printf("sourse string is: %s\n",s);
strncpy(d,s,n);
d[n]='\0';
printf("destination string is: %s\n",d);
}
