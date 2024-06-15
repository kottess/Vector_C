#include<stdio.h>
int main()
{
	int i,j;
	float f;
	printf("Enter the value:");
	scanf("%f",&f);
	char *p=(char *)&f;
	p=p+3;
	for(i=0;i<3;i++)
	{
		for(j=7;j>=0;j--)
			printf("%d",*p>>j&1);
		p--;
	}
	printf("\n");
}
