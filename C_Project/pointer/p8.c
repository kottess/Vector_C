#include<stdio.h>
int main()
{
	char *ptr = "2braces.com";
	printf("%s\n",*&ptr);
	return 0;
}
