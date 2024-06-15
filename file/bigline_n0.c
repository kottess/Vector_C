#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage: ./a.out filename\n");
		return 0;
	}
	
	FILE *fp=fopen(argv[1],"r");	
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	char ch; int c1=0,c2=0,l=1,l1;
	while((ch=fgetc(fp))!=-1)
	{
		c2++;
		if(ch=='\n')
		{
			l++;	
			c2=0;
		}		
		
		if(c1<c2)
		{	
			c1=c2;			
			l1=l;
		}
	}
	printf("Biggest line number- %d & No of characters in that line- %d\n",l1,c1+1);
}


