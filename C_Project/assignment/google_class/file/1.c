#include<stdio.h>
int main(int argc,char *argv[])
{
	char ch;
	if(argc!=4)
	{
		printf("usage:./a.out file1 file2 file3\n");
		return 0;
	}
	FILE *fr=fopen(argv[1],"r");
	FILE *fr1=fopen(argv[2],"r");
	FILE *fw=fopen(argv[3],"w");
	while((ch=fgetc(fr))!=-1)
		fputc(ch,fw);
	while((ch=fgetc(fr1))!=-1)
		fputc(ch,fw);
	fclose(fw);
}
