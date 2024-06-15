#include<stdio.h>
int main()
{
FILE *fp = fopen("data.txt","a");
char a[20];
printf("Enter the string\n");
scanf("%s",a);
fputs(a,fp);
printf("Data is successfully saved in at the end of file\n");
}
