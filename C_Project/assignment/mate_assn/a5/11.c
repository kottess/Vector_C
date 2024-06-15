#include<stdio.h>
#include<string.h>
int main()
{
	char s[20]="hello world";
	s[5]='\0';
	printf("%d",strlen(s));

}
