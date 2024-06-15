#include<stdio.h>
#include<signal.h>
main()
{
int ret;
printf("hello...\n");
ret=alarm(10);
printf("1)ret=%d\n",ret);
ret=alarm(5);
printf("2)ret=%d\n",ret);
ret=alarm(3);
printf("3)ret=%d\n",ret);
ret=alarm(1);
printf("4)ret=%d\n",ret);
printf("by...\n");
while(1);
}
