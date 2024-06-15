#include<stdio.h>
int main()
{
	char ch = 'A';
	int x = 1234;
	float f = 22.7;
	char a[] = "Vector";
	FILE *fp = fopen("data.txt","w");
	fprintf(fp,"%c %d %f %s\n",ch,x,f,a); //writes all variable data into a file
}
