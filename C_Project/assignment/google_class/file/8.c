#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc<3)
	{
		printf("usage: ./a.out src_file dest_file..\n");
		return 0;
	}
	
	FILE *fs=fopen(argv[1],"r");	
	if(fs==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	char ch; int i;
	FILE *fd;
	for(i=2;i<argc;i++)
	{
		fd=fopen(argv[i],"w");
		while((ch=fgetc(fs))!=-1)
			fputc(ch,fd);
		rewind(fs);
	}
	fclose(fd);
}
