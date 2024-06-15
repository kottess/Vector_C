#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=4)
	{
		printf("usage: ./a.out filename c1 c2\n");
		return 0;
	}	

	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	
	int i=0,count=0; char ch;
	while((ch=fgetc(fp))!=-1)
		count++;
	rewind(fp);
	
	char *p=(char*)malloc(count*sizeof(char)+1);
	while((ch=fgetc(fp))!=-1)
		p[i++]=ch;	
	p[i]='\0';
	
	char c1=*argv[2],c2=*argv[3];
	for(i=0;p[i];i++)
	{
		if(p[i]==c1)
			p[i]=c2;	
	}
	
	fp=fopen(argv[1],"w");
	for(i=0;p[i];i++)
		fputc(p[i],fp);
				
	fclose(fp);
}
