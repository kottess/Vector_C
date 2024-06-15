#include<stdio.h>
int main()
{
char ch;
int x;
float f;
char a[20];
FILE *fp = fopen("data.txt","r");
fread(&ch,sizeof(char),1,fp);
fread(&x,sizeof(int),1,fp);
fread(&f,sizeof(float),1,fp);
fread(a,sizeof(char),20,fp);

printf("ch = %c\n",ch);
printf("x = %d\n",x);
printf("f = %f\n",f);
printf("a = %s\n",a);
}
