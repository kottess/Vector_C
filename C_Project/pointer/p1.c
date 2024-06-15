#include<stdio.h>
int main()
{
int a[]={10,20,30,40,50,60,70,80,90,100};
int *p=a;
long long int **ptr=&p;
int i;
for(i=0;i<5;i++)
printf("%d ",*((*ptr)++));
printf("\n");
}
