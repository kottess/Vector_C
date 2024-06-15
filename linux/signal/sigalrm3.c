#include<stdio.h>
#include<signal.h>
main()
{
int ret;
printf("hello...\n");
ret=alarm(5);
printf("1)ret=%d\n",ret);
ret=alarm(2);
printf("2)ret=%d\n",ret);
printf("by...\n");
while(1);
}
