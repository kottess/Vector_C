#include<stdio.h>
void fun()
;int main()
{
	int i;
	while(i<=5)
	{
		printf("%d",++i);
		if(i>2)
			goto here;
	}
}
void fun()
{
here:
printf("hello");

}
