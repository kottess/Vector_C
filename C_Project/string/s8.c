//src to des 
#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
char d[50];
printf("Enter sourse string:");
scanf(" %[^\n]",s);
printf("Enter destination string:");
scanf(" %[^\n]",d);
printf("sourse string is %s\n",s);
printf("destination string is %s\n",d);
strcat(d,s);
printf("after appending %s \n",d);
}
