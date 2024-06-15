#include<stdio.h>
int main()
{
	char  *p1="abcdefg";
  	char *p2=p1++;
	printf("%s      %s\n",++p1,p2);
}
