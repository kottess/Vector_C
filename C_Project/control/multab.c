#include<stdio.h>
int main()
{
	int n,n1,i=1;
	printf("enter two numbers :");
	scanf("%d %d",&n,&n1);
	abc:
	printf("%d*%d=%d   \t  %d*%d=%d\n",n,i,n*i,n1,i,n1*i);
	i++;
	if(i<=10)
		goto abc;
}
