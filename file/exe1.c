#include<stdio.h>
int main()
{
	char *str = "ZOHO";
	while (*str)
	{
		putc(*str, stdout);
		fputchar(*str);
		printf("%c", *str);
		str++;
	}
	return 0;
}
