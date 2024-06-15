#include<stdio.h>
#include<signal.h>
void isr(int n)
{
printf("in isr....\n");
}
int main()
{
//signal(2,isr);
struct sigaction v;
v.sa_handler=isr;
sigemptyset(&v.sa_mask);
v.sa_flags=0;
sigaction(2,&v,0);
printf("signal no 2 action change dto isr..\n");
while(1);
}
