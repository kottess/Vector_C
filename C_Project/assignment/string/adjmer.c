#include<stdio.h>
int main()
{
char a[40],b[40],c[40]={0};
int i,j,k=0,l=0;
printf("Enter two strings\n");
scanf("%s %s",a,b);
for(i=1,j=0;a[k]&&b[l];i++,j++)
{
if(i%2==0)
c[j]=b[l++];
else
c[j]=a[k++];
}
for(j;a[k]||b[l];j++)
{
if(a[k]!='\0')
c[j]=a[k++];
if(b[l]!='\0')
c[j]=b[l++];

}
printf("%s",c);

}
