#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage: ./wc filename\n");
		return 0;	
	}
	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;	
	}
	char ch,a[50]; int c=0,w=0,l=0;
	while((ch=getc(fp))!=-1)
	{
		c++;
		if(ch=='\n')
			l++;
	}
	rewind(fp);
	while(fscanf(fp,"%s",a)!=-1)
		w++;
	printf("%3d %3d %d %s\n",l,w,c,argv[1]);
	
}
