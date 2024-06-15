#include<stdio.h>
int main()
{
FILE *fp = fopen("data.txt","a+");
char ch,a[20];
ch = fgetc(fp);
//ch = fgetc(fp);
printf("ch = %c\n",ch);
printf("Enter the string\n");
scanf("%s",a);
fputs(a,fp);
printf("Data is saved successfully saved in at the end of file\n");
}
