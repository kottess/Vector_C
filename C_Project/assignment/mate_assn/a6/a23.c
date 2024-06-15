#include<stdio.h>
void p(char *s)
{
	if(*s)
		p(++s);
	printf("%c",*s);
}
int main()
{
	char str[]="Geneius";
	p(str);
}
