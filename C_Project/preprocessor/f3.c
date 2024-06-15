#include<stdio.h>
#define print(x,y,z) printf(#x"=%d "#y"=%d "#z"=%d\n",x,y,z)
int main()
{
	int x=10,y=20,z=30;
	print(x,y,z);
}
