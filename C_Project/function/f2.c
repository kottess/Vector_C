#include<stdio.h>
int main()
{
static int x=5;
if(x-- >=0)
{
main();
printf("%d ",x);
}
printf("hello..\n");
}
