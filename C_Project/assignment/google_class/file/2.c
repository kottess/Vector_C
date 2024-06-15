#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("usage: ./a.out filename line no\n");
		return 0;	
	}
	char temp[30]="temp";
	int n=atoi(argv[2]),c=0,i=0,l=1;
	char ch;
	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
		printf("File doesn't exist\n");
	FILE *f=fopen(temp,"w+");
	while((ch=fgetc(fp))!=-1)
	{
		if(ch=='\n')
			l++;
		if(l!=n)
			fputc(ch,f);
	}
	rewind(f);	
	fp=fopen(argv[1],"w");
	while((ch=fgetc(f))!=-1)
		fputc(ch,fp);
	fclose(fp);
	remove(temp);	
}
