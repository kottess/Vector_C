//sort by names
#include<stdio.h>
#include<string.h>
int main()
{
char a[20][30],t[20];
int i,j,r,k;
printf("No of strings\n");
scanf("%d",&r);
printf("Enter %d strings\n",r);
for(i=0;i<r;i++)
scanf("%s",a[i]);
printf("Before sorting\n");
for(i=0;i<r;i++)
printf("%s\n",a[i]);
printf("\n");
for(i=0;i<r-1;i++)
{
for(j=i+1;j<r;j++)
{
if(strcmp(a[i],a[j])>0)
{
strcpy(t,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],t);
}
}
}

printf("After sorting\n");
for(i=0;i<r;i++)
printf("%s\n",a[i]);
}
