#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("Usage: ./a.out filename word\n");
		return 0;
	}
	FILE *fp = fopen(argv[1],"r+"); 
	if(fp==NULL) 
	{
		printf("file doesn't exist\n");
		return 0;
	}
	char ch[50],ch1[50],temp; int i, j, n, r;
	n=strlen(argv[2]);	
	strcpy(ch1,argv[2]);
		
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=ch1[i];
		ch1[i]=ch1[j];
		ch1[j]=temp;
	}
	
	while((fscanf(fp,"%s",ch))!=-1)
	{
		if((strncmp(ch,argv[2],n))==0)
		{
            r=strlen(ch);
			fseek(fp,-r,1);
			fputs(ch1,fp);
				
		}		
	}
}
