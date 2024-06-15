#include<stdio.h>
#include<unistd.h>
#include<setjmp.h>
jmp_buf env;
void abc();
int main() 
{
	int ret;
	printf("1)one...\n");
	printf("2)two...\n");
	ret=setjmp(env);
	sleep(1);
	printf("abc function going to call...\n");
	if(ret!=1)
		abc();
	printf("after abc function cal...\n");
}
void abc()
{
	static int i=5;
	printf("in abc function body...\n");
	longjmp(env,--i);
	printf("return from abc function body..\n");
	return;
}
