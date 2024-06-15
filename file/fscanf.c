#include<stdio.h>
int main()
{
	char ch;
	int x;
	float f;
	char a[20];
	FILE *fp = fopen("data.txt","r");
	if(fp == NULL) 
	{
		printf("file doens't exist\n");
		return 0;
	}
	fscanf(fp,"%c %d %f %s",&ch,&x,&f,a); //reads file data from the file
	printf("ch = %c\n",ch);
	printf("x = %d\n",x);
	printf("f = %f\n",f);
	printf("a = %s\n",a);
}
