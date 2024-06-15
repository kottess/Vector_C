#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage:./a.out filename\n");
		return 0;	
	}
	FILE *fp=fopen(argv[1],"w+");
	char ch;
	while((ch=getchar())!=-1)
		fputc(ch,fp);
	rewind(fp);
	while((ch=fgetc(fp))!=-1)
		printf("%c",ch);
	fclose(fp);
}
