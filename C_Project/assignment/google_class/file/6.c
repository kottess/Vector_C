#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	if(argc!=4)
	{
		printf("usage:./a.out filename exist_word1 replace_word2\n");
		return 0;
	}
	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("file doesn't exist\n");
		return 0;	
	}
	char ch,*stop;
	int c=0,i=0,j,n=strlen(argv[2]);
	while((ch=fgetc(fp))!=-1)
		c++;
	rewind(fp);
	char *str=(char *)malloc(c*sizeof(char)+1);
	while((ch=fgetc(fp))!=-1)
		str[i++]=ch;
	str[i]='\0';
	fclose(fp);
	i=0;
	fp=fopen(argv[1],"w");	
	while((stop=strstr(str+i,argv[2]))!=NULL)
	{
		for(j=stop-str;i<j;i++)
			fputc(str[i],fp);
		fprintf(fp,"%s",argv[3]);
		i+=strlen(argv[2]);	
	}
	for(;str[i];i++)
		fputc(str[i],fp);
	free(str);
	fclose(fp);
}
