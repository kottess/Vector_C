#include<stdio.h>
#include<signal.h>
void isr(int n)
{
printf("in isr...\n");
}
int main()
{
signal(9,isr);
printf("process is executing...\n");
printf("pid:%d\n",getpid());
while(1);
}
