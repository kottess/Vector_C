#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p=realloc(0,sizeof(int));
printf("%p\n",p);
printf("%d\n",p[-1]);

p=realloc(p,0);
printf("%p\n",p);
printf("%d\n",p[-1]);


}
