#include<stdio.h>
int main()
{
	signed char ch=-128;
	printf("signed char\n");
	printf("ch=%d\n",ch);
	ch=-129;
	printf("ch1=%d\n",ch);

	unsigned char ch1=-128;
	printf("unsigned char\n");
	printf("ch=%d\n",ch1);
	ch1=-129;
	printf("ch1=%d\n",ch1);
	ch1=129;
	printf("ch1=%d\n",ch1);
}
