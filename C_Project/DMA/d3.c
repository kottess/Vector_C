#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p;
p=(int *)malloc(5*sizeof(int));
printf("%p\n",p);
printf("%d\n",p[-1]);

p=(int *)realloc(p,5*sizeof(int));
printf("%p\n",p);
printf("%d\n",p[-1]);

p=(int *)realloc(p,7*sizeof(int));
printf("%p\n",p);
printf("%d\n",p[-1]);

free(p);
}
