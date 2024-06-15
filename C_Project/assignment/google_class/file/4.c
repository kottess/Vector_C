#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("usage:./a.out pattern filename\n");
		return 0;	
	}

	FILE *fp=fopen(argv[2],"r");
	if(fp==NULL)
	{
		printf("file doesn't exist\n");
		return 0;	
	}
	char ch; int l=0,c=0;
	while((ch=fgetc(fp))!=-1)
	{
		c++;
		if(ch=='\n')
		{
			if(l<c)
				l=c;
			c=0;
		}
	}
	rewind(fp);
	char *str=(char *)malloc(l*sizeof(char));
	while((fgets(str,l,fp))!=NULL)
	{
		if(strstr(str,argv[1])!=NULL)
			printf("%s",str);	
	}
	fclose(fp);
}
