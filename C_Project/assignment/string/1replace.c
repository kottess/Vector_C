#include<stdio.h>
int main()
{
int i,j,k,l,m=0;
char a[40],b[40],r[40],d[40];
printf("Enter 1st strings\n");
scanf("%[^\n]",a);
printf("Enter 2nd strings\n");
scanf(" %[^\n]",b);
printf("Enter the word to be replace:\n");
scanf(" %s",r);
for(i=0,k=0;b[i];i++,k++)
{
if(b[i]==r[0])
{
for(j=0;r[j];j++,m++)
{
if(b[m]!=r[j])
goto loop;
}
if(r[j]=='\0')
{
for(k=i,l=0;a[l];k++)
{
d[k]=a[l];
l++;
}
i=i+j;
}
}
loop:
d[k]=b[i];

}
printf("string-%s\n",d);
}
