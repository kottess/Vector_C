#include<stdio.h>
#include<signal.h>
void isr(int n)
{printf("in isr...\n");
//printf("signal no:%d\n",n);
//printf("isr completed....\n");
//alarm(2);
}
main()
{
// signal(14,isr);
signal(SIGALRM,isr);
printf("hello..\n");
alarm(10); //sets the alarm for this process after 10 seconds
printf("bye...\n");
while(1);
}
