#include<stdio.h>
#include<string.h>
int main(){
	char *ptr = "hello";
	char a[22];
	*ptr = "world";
	printf("\n%s %s",ptr, a);
	return 0;
}
