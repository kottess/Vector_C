#include<stdio.h>
int main()
{
	FILE *fp = fopen("data.txt","w");
	fputc('A',fp);
	fputc('B',fp);
	fputc('C',fp);
//fclose(fp); //closes the file stream, so the data is saved in file.
//while(1); //prog is in infinite loop
}
