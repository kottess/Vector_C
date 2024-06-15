#include<stdio.h>
int main()
{
	FILE *fp = fopen("data.txt","r"); //opens in read mode.
	if(fp == NULL) 
	{
		printf("file doesn't exist\n");
		return 0;
	}
	char ch;
	//while((ch=getchar())!=-1)
		//fputc(ch,fp);
	fseek(fp,5,0); //fpi increments 5bytes from start position.
	ch = fgetc(fp);
	printf("ch = %c\n",ch);
	printf("file position : %ld\n",ftell(fp));

	fseek(fp,5,1); //fpi increments 5bytes from current position.

	ch = fgetc(fp);
	printf("ch = %c\n",ch);
	printf("file position : %ld\n",ftell(fp));

	fseek(fp,-5,2); //fpi increments 5bytes from last position.
	ch = fgetc(fp);
	printf("ch = %c\n",ch);
	printf("file position : %ld\n",ftell(fp));
}
