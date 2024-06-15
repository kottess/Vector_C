#include<stdio.h>
	int main()
	{
		union u
		{
			struct
			{
				 char ch[2];
				 char c[2];
			}v1;
			struct
			{
				static int x;
				static int y;
			}v2;
		}u = {12,1,15,1};
		printf("%d  %d\n",u.v2.x, u.v2.y);
	}
