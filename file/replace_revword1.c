#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[100],rep[50]; 
	int l;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	printf("Enter the word to be replaced\n");
	scanf(" %s",rep);
	FILE *fp=fopen("data.txt","w");
	
	for(l=0;s[l];l++)
	fputc(s[l],fp);
	
	sleep(3);
	fclose(fp);
	sleep(3);
	fp=fopen("data.txt","r");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;	
	}
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
	
	fp=fopen("data.txt","w"); 
	char *stop, *ch1,temp;
	strcpy(ch1,rep);	
	j=strlen(ch1)-1;
	for(i=0;i<j;i++,j--)
	{
		temp=ch1[i];
		ch1[i]=ch1[j];
		ch1[j]=temp;
	}
	i=0;
	while((stop=strstr(buf+i,rep))!=NULL)
	{
		for(j=stop-buf;i<j;i++)
			fputc(buf[i],fp); 
		fprintf(fp,"%s",ch1); 
		i+=strlen(rep); 
	}
	for(;buf[i];i++)
		fputc(buf[i],fp); 
	free(buf);
	fclose(fp);
}

