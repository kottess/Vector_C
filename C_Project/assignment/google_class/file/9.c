#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage:./a.out filename\n");
		return 0;
	}
	FILE *fp=fopen(argv[1],"r+");
	if(fp==NULL)
	{
		printf("file doesn't exist\n");
		return 0;
	}
	
	char ch; int c=0,i=0,a=0,d=0,s=0;
	while((fgetc(fp))!=-1)
		c++;
	rewind(fp);
	char *p=(char *)malloc(c*sizeof(char)+1);
	while((ch=fgetc(fp))!=-1)
		p[i++]=ch;
	p[i]='\0';
	for(i=0;p[i];i++)
	{
		if(((p[i]>='a')&&(p[i]<='z'))||((p[i]>='A')&&(p[i]<='Z')))
			a++;
		else if((p[i]>='0')&&(p[i]<='9'))
			d++;
		else
			s++;	
	}
	printf("no of alphabets %d,no of digits %d,no of special chars %d\n",a,d,s);
	fclose(fp);
	free(p);
	p=NULL;
}
