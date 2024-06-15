#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{	
		printf("Usage: ./a.out filename\n");
		return 0;
	}
	FILE *fp=fopen(argv[1],"r+");	
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	char str[50]; 
	while(fscanf(fp,"%s",str)!=-1)
	{
		if(str[0]>='a'&&str[0]<='z')
			str[0]^=32;
	}
	fclose(fp);
}
