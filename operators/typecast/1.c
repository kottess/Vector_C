#include<stdio.h>
int main()
{
	unsigned int x = 2,y=3000000000; 
	unsigned long long int z; 
	z = x * y;
	//z = (unsigned long long int)x * y;
	printf("z=%llu\n", z);
}
