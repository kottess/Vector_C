#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("usage: ./a.out src_file dest_file\n");
		return 0;
	}
	
	FILE *fs=fopen(argv[1],"r");	
	if(fs==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	char ch;
	FILE *fd=fopen(argv[2],"w");
	while((ch=fgetc(fs))!=-1)
		fputc(ch,fd);
	remove(argv[1]);
	fclose(fd);
}
