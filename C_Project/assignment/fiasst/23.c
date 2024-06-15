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
	char ch,temp; int c=0,i,j,k=0;
	while((ch=fgetc(fp))!=-1)
		c++;
	rewind(fp);
	char *p=(char *)malloc(sizeof(char)*c+1);
	while((ch=fgetc(fp))!=-1)
		p[k++]=ch;
	p[k]='\0';		
	for(i=0;p[i];i++)
	{
		for(j=i;p[j]!=' '&&p[j]!='\n'&&p[j];j++);
		k=j--;
		for(;i<j;i++,j--)
		{
			temp=p[i];
			p[i]=p[j];
			p[j]=temp;
		}
		i=k;
	}
	fp=fopen(argv[1],"w");
	for(i=0;p[i];i++)
		fputc(p[i],fp);
	fclose(fp);
}
