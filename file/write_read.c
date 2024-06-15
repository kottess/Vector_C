#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage:./a.out filename\n");
		return 0;
}
	FILE *fp=fopen(argv[1],"w");
	
	char ch;
	printf("Enter the data\n");
	
	while((ch=getchar())!=EOF)
		fputc(ch,fp);

	fclose(fp); 
	printf("Data in file\n");
	fp=fopen(argv[1],"r");

	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
}
