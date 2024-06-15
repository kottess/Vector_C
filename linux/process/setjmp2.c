#include<stdio.h>
#include<setjmp.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
jmp_buf env;
int main()
{
	int ret,ret1,x,y,op;ret1=setjmp(env);
	if(ret1==3)
		printf("problem in multiplication...\n");
	if(ret1==4)
		printf("problem in division...\n");
	printf("enter x value...\n");
	scanf("%d",&x);
	printf("enter y value...\n");
	scanf("%d",&y);
	printf("1:add 2:sub 3:mul 4:div\n");
	printf("enter option...\n");
	scanf("%d",&op);
	if(op==1)
	{
		ret=add(x,y);
		printf("add=%d\n",ret);
	}
	else if(op==2)
	{
		ret=sub(x,y);
		printf("sub=%d\n",ret);
	}
	else if(op==3)
	{
		ret=mul(x,y);
		printf("mul=%d\n",ret);
	}
	else if(op==4)
	{
		ret=div(x,y);
		printf("div=%d\n",ret);
	}
	else
	{
		printf("invalid option..\n");
		return 0;
	}
}
int add(int a,int b)
{
	return(a+b);
}
int sub(int a,int b)
{
	return(a-b);
}
int mul(int a,int b)
{
	if((a==0)||(b==0))
		longjmp(env,3);
	return(a*b);
}
int div(int a,int b)
{
	if(b==0)
		longjmp(env,4);
	return(a/b);
}
