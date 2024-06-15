#include<stdio.h>
#include<signal.h>
int i=0;
void isr(int n)
{
printf("in isr...\n");
i++;
alarm(2);
if(i==3)
signal(SIGALRM,SIG_DFL);
}
main()
{
signal(SIGALRM,isr);
printf("hello..\n");
alarm(10); //sets the alarm for this process after 10 seconds
printf("by...\n");
while(1);
}
