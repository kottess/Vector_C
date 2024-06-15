#include<stdio.h>
int main()
{
	FILE *fp = fopen("data.txt","r");
	if(fp == NULL) 
	{
		printf("file doesn't exist\n");
		return 0;
	}
	char a[20];
	while(fscanf(fp,"%s",a) != EOF) //reads word by word from file
	printf("%s\n",a);
}
