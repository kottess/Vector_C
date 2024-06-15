#include<stdio.h>
#include<signal.h>
void isr(int n)
{
printf("in isr...\n");
}
int main()
{
struct sigaction v;
v.sa_handler=isr;
sigemptyset(&v.sa_mask);
v.sa_flags=SA_RESETHAND;
sigaction(2,&v,0);
while(1);
}
