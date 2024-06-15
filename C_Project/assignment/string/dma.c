#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *input(char *);
int main()
{
int i,j;
char *temp;
char *s1=(char *)malloc(30*sizeof(char));
char *s2=(char *)malloc(30*sizeof(char));
char *s3=(char *)malloc(30*sizeof(char));
char *s4=(char *)malloc(30*sizeof(char));
input(s1);
input(s2);
input(s3);
input(s4);
char *p[4]={s1,s2,s3,s4};
for(i=0;i<3;i++)
{
for(j=0;j<3-i;j++)
{
if(strlen((const char*)p[j])>strlen((const char*)p[j+1]))
{
temp=p[j];
p[j]=p[j+1];
p[j+1]=temp;
}
}
}
printf("After sorting\n");
for(i=0;i<4;i++)
printf("%s\n",p[i]+0);
}

char *input(char *m)
{
printf("Enter the string\n");
scanf(" %s",m);
return m;
}



