#include<stdio.h>
int main()
{
	void c();
	int i=5;
	i=c();
	printf("%d\n",i);
}
void c(int c)
{
	printf("hey\n");
}

