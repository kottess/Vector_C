#include<stdio.h>
#include<signal.h>
main()
{
int ret;
printf("hello...\n");
ret=alarm(10);
printf("1)ret=%d\n",ret);
sleep(3);
ret=alarm(5);
printf("2)ret=%d\n",ret);
sleep(1);
ret=alarm(3);
printf("3)ret=%d\n",ret);
printf("by...\n");
while(1);
}
