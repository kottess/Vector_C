#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("usage: ./a.out pattern filename\n");
		return 0;
	}
	
	FILE *fp=fopen(argv[2],"r");	
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	char ch;int c=0,c1=0,c2=0,i=0,l=0;
	while((ch=fgetc(fp))!=-1)
	{
		c2++;		
		if(ch=='\n')
		{
			l++;
			if(c1<c2)
			{
				c1=c2;
			}	
			c2=0;
		}
	}
	int *a=(int *)malloc(l*sizeof(int));
	rewind(fp); i=0;
	while((ch=fgetc(fp))!=-1)
	{
		c++;	
		if(ch=='\n')
		{
			a[i++]=c+1;
			c=0;		
		}
	
	}
	char *str=(char *)malloc(c1*sizeof(char)+1);
	rewind(fp); i=0;
	while(fgets(str,a[i++],fp))
	{
				
		if(strstr(str,argv[1]))
			printf("%s",str);			
	}
	fclose(fp);
}
