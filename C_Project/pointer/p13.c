#include<stdio.h>
#include<string.h>
int main(){
	char a = 30, b = 5;
	char *p = &a, *q = &b;
	printf("%ld", q - p);
	return 0;
}
