#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage:./a.out filename\n");
		return 0;	
	}
	FILE *fp=fopen(argv[1],"r");
	char ch; int c=0,l=0,w=0;
	while((ch=fgetc(fp))!=-1)
	{
		c++;
		if(ch=='\n')
			l++;
	}
	rewind(fp);
	char str[40];
	while((fscanf(fp,"%s",str))!=-1)
		w++;	
	printf("%3d %2d %2d %s\n",l,w,c,argv[1]);
}
