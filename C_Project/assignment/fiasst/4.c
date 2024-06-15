#include<stdio.h>
int main()
{
	int x=2048,*ip;
	char *cp=&x;
 	ip=&x;
	printf("%d\n",*cp);
 	*cp='2';
 	printf("%d\n",*ip);
}
