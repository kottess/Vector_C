#include<stdio.h>
int main()
{
	static char names[5][20]={"pascal","ada","cobol","fortan","perl"};
	int i;
	char *t;
	t=names[3];
	names[3]=names[4];
	names[4]=t;
	for(i=0;i<=4;i++)
		printf("%s",names[i]);
}
