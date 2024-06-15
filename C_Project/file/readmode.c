#include<stdio.h>
#include<stdlib.h>
int main()
{
	char file[50];
	printf("Enter the file name\n");
	scanf("%s",file);
	FILE *fp=fopen(file,"r");
	if(fp==NULL)
		printf("File not exist\n");
	else
		printf("File exist\n");
}
