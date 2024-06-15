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
	printf("ret=%d\n",ret);
	sleep(1); 
	printf("abc function going to call...\n");
	abc();
	printf("after abc function cal...\n");
}
void abc()
{
	printf("in abc function body...\n");
	longjmp(env,1);
	printf("return from abc function body..\n");
	return;
}
