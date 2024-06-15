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
	char ch; int c2=0,c1=0,c=0;
	
	while((ch=fgetc(fp))!=-1)
	{
		c++,c2++;
		if(ch=='\n')
		{
			if(c1<c2)
			{	
				c1=c2;			
			}
			c2=0;
		}		
		
	}
	char *str=(char *)malloc(c*sizeof(char));
	rewind(fp); 
	while(fgets(str,c1+1,fp))
	{
		if(strstr(str,argv[1]))  
			printf("%s",str);			
	}
	fclose(fp);
}
