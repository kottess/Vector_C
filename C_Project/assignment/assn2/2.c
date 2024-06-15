#include<stdio.h>
main()
	{
	int x = 'a';
	static int y = x;
	printf("%d\n",y);
	}

