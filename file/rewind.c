#include<stdio.h>
int main(int argc,char *argv[1]) //command line arguments
{
	if(argc != 2) 
	{ //no.of arguments must be 2
		printf("Usage : ./a.out filename\n");
		return 0;
	}
	FILE *fp = fopen(argv[1],"r"); //opens the file in read mode
	if(fp == NULL) //checking the file is exist or not
	{ 
		printf("file doesn't exist\n");
		return 0;
	}
	int i;
	char ch;
	for(i=0;i<4;i++)
	{
		while( (ch = fgetc(fp)) != EOF) //reads all the characters from file.
			printf("%c",ch);
		rewind(fp); //reset the file position indicator to starting position.
	}
}
