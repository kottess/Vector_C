#include<stdio.h>
int main()
{
	char a[3][3]={{"abc"},{"def"},{"ghi"}};
	int i,r;
	r=sizeof a/sizeof a[0];
	for(i=0;i<r;i++)
		printf("%s\n",a[i]);
}
