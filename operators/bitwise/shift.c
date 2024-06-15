#include<stdio.h>
int main()
{
	unsigned int n,p,res;
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("Enter shift position\n");
	scanf("%d",&p);
	res=n>>p;
	printf("%d>>%d -> %d\n",n,p,res);
	res=n<<p;
	printf("%d<<%d -> %d\n",n,p,res);

}
