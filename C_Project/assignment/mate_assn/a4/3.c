#include<stdio.h>
int main()
{
	int n,f=1;
	printf("Enter any number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		f*=n;
		n--;
	}
	printf("factorial is %d\n",f);	

}
