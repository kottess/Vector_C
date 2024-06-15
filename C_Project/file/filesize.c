#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage: ./a.out filename\n");
		return 0;
	}
	char ch;
	int c=0;
	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
		printf("File doesn't exist\n");
	while((ch=fgetc(fp))!=-1)
	{
		printf("%c",ch);
		c++;
	}
	printf("File Size: %d\n",c);
}
