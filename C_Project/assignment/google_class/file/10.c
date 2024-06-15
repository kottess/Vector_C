#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc != 3) 
	{
		printf("Usage : ./a.out file word\n");
		return 0;
	}
	FILE *fp=fopen(argv[1],"r");
	int c=0, i=0, j;
	while(fgetc(fp)!=-1)
		c++; 
	rewind(fp);
	char ch;
	char *buf=(char *)malloc(c*sizeof(char)+1); 
	while((ch=fgetc(fp))!=-1)
		buf[i++]=ch; 
	buf[i]='\0';
	fclose(fp);
	
	fp=fopen(argv[1],"w"); 
	char *stop, *ch1,temp;
	strcpy(ch1,argv[2]);	
	j=strlen(ch1)-1;
	for(i=0;i<j;i++,j--)
	{
		temp=ch1[i];
		ch1[i]=ch1[j];
		ch1[j]=temp;
	}
	i=0;
	while((stop=strstr(buf+i,argv[2]))!=NULL)
	{
		for(j=stop-buf;i<j;i++)
			fputc(buf[i],fp); 
		fprintf(fp,"%s",ch1); 
		i+=strlen(argv[2]); 
	}
	for(;buf[i];i++)
		fputc(buf[i],fp); 
	free(buf);
	fclose(fp);
}
