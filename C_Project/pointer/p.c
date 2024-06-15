#include<stdio.h>
int main()
{
int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
int i;
int (*)p[3]=(int (*)[3])a;
for(i=0;i<3;i++)
printf("%d ",p[i])
}
