//2.write a program in c to delete a specfic line from a file.
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
	if(argc!=3)
	{
		printf("usage: ./a.out file_name line_no\n");
		return 0;
	}

	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("file not found\n");
		return 0;
	}
	int max1=1,max2=0,lines=0;
	char ch;
	while((ch=fgetc(fp))!=EOF)
	{
		max1++;
		if(ch=='\n')
		{
			lines++;
			if(max2<max1)
				max2=max1;
			max1=0;
		}
	}

	char a[lines][max2];
	int i=0,j=0;
	rewind(fp);

	while((ch=fgetc(fp))!=EOF)
	{
		a[i][j++]=ch;

		if(ch=='\n')
		{
			a[i][j]='\0';
			i++;
			j=0;
		}
	}
	
	fclose(fp);
	remove(argv[1]);
	
	fp=fopen(argv[1],"w");

	int line_no=(atoi(argv[2])-1);
	i=0;
	while(i<lines)
	{
		if(i!=line_no)
			fprintf(fp,"%s",a[i]);

		i++;
	}
	fclose(fp);
}


