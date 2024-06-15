#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("usage: ./a.out filename word\n");		
		return 0;
	}
	FILE *fp = fopen(argv[1],"r");
	if(fp == NULL) 
	{
		printf("file doesn't exist\n");
		return 0;
	}
	char a[30]; int l=0;
	while(fscanf(fp,"%s",a)!=EOF)
	{
		if(strstr(a,argv[2]))
			l++;
	}	
	printf("The word '%s' present in the file is %d times\n",argv[2],l);
}
