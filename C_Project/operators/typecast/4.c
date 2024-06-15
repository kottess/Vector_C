#include <stdio.h>
int main()
{
	char a = 0xfb;
	unsigned char b = 0xfb;
	printf("a = %c\n", a);
	printf("b = %c\n", b);
	if (a == b)
		printf("Same\n");
	else
		printf("Not Same\n");
	return 0;
}
