#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Usage: ./a.out filename\n");
		return 0;	
	}
	
	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;	
	}	
		


}

