#include<stdio.h>
int sum(int ,int);
int sub(int ,int);
int mul(int ,int);
int div(int ,int);
int main()
{
	int a,b,op;
	printf("Enter two number\n");
	scanf("%d %d",&a,&b);
	printf("Enter option 1-sum 2-sub 3-mul 4-div\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1: printf("sum=%d\n",sum(a,b)); break;
		case 2: printf("sub=%d\n",sub(a,b)); break;
		case 3: printf("mul=%d\n",mul(a,b)); break;
		case 4: printf("div=%d\n",div(a,b)); break;
		default : printf("invalid option\n");
	}
}
int sum(int a,int b)
{
	return (a+b);
}
int sub(int a,int b)
{
	return (a-b);
}
int mul(int a,int b)
{
	return (a*b);
}
int div(int a,int b)
{
	return (a/b);
}
