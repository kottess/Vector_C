#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc<3)
	{
		printf("usage :./a.out src_file dest_file\n");
		return 0;
	}
	FILE *fs=fopen(argv[1],"r");
	if(fs==NULL)
	{
		printf("file does not exist\n");
		return 0;
	}
	char ch,c;
	int i;
	FILE *fd;
	for(i=2;i<argc;i++)
	{
		fd=fopen(argv[i],"r");
		if(fd!=NULL)
		{
			printf("%s file already exist,do u want to copy the file(y/n)\n",argv[i]);
			scanf(" %c",&c);

			if((c=='y')||(c=='Y'))
				goto label;

			else
				continue;			
		}
		label:	
		
			fd=fopen(argv[i],"w");
			while((ch=fgetc(fs))!=EOF)
				fputc(ch,fd);
			fclose(fd);	
			rewind(fs);
	}
}
