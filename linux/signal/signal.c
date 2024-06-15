#include<stdio.h>
#include<signal.h>
void my_isr(int n)
{
	printf("in isr...\n");
	signal(2,SIG_DFL);
	signal(3,SIG_DFL);
	printf("isr completed...\n");
}
int main()
{
	signal(2,SIG_IGN);
	signal(3,SIG_IGN);
	signal(14,my_isr);
	printf("hello...\n");
	alarm(10);
	printf("by...\n");
	while(1);
}
