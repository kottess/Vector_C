#include<stdio.h>
#include<signal.h>
void isr(int n)
{
printf("in isr...\n");
int i;
for(i=0;i<2000000000;i++);
for(i=0;i<2000000000;i++);
printf("isr completed...\n");
}
int main()
{
struct sigaction v;
v.sa_handler=isr;
sigemptyset(&v.sa_mask);
// v.sa_flags=0;
v.sa_flags=SA_NODEFER;
sigaction(2,&v,0);
while(1);
}
