#include<stdio.h>
#include<stdlib.h>
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
	char ch;int c=0,i=0;
	while((ch=fgetc(fp))!=-1)
		c++;
	rewind(fp);
	char *str=(char *)malloc(c*sizeof(char)+1);	
	while((ch=fgetc(fp))!=-1)
		str[i++]=ch;
	str[i]='\0';
	fclose(fp);
	for(i=0;str[i];i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]^=32;	
		else if(str[i]>='A'&&str[i]<='Z')
			str[i]^=32;	

	}
	
	fp=fopen(argv[1],"w");
	for(i=0;str[i];i++)
		fputc(str[i],fp);
	fclose(fp);
}
