#include<stdio.h>
void rev(int *,int,int);
int main()
{
int a[10],i;
printf("Enter the array elements\n");
for(i=0;i<10;i++)
scanf("%d",a+i);
rev(a,0,9);
for(i=0;i<10;i++)
printf("%d ",a[i]);
printf("\n");
}
void rev(int *p,int i,int j)
{
int temp;
if(i<j)
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
i++;
j--;
return rev(p,i,j);
}
}

