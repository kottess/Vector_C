#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage:./a.out filename\n");
		return 0;	
	}
	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	char ch;int c=0,i,j,n,k=0;
	while((ch=fgetc(fp))!=-1)
		c++;
	rewind(fp);
	char buff[50],temp;
	char *str=(char *)malloc(sizeof(char)*c+1);
	while((fscanf(fp,"%s",buff))!=-1)
	{
		for(n=0;buff[n];n++);
		for(i=0,j=n-1;i<j;i++,j--)
		{
			temp=buff[i];
			buff[i]=buff[j];
			buff[j]=temp;
		}
		for(i=0;buff[i];i++,k++)
			str[k]=buff[i];
		str[k++]=' ';
	}
	str[k]='\0';	
	fp=fopen(argv[1],"w");
	for(i=0;str[i];i++)
		fputc(str[i],fp);
	fclose(fp);
}
