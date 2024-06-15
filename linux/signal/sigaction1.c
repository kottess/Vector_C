#include<stdio.h>
#include<signal.h>
void isr(int n)
{printf("in isr...\n");
}
int main()
{
int n;
signal(2,isr);
signal(3,SIG_IGN);
struct sigaction v;
printf("enter signal number...\n");
scanf("%d",&n);
sigaction(n,0,&v);
if(v.sa_handler==SIG_DFL)
printf("default..\n");
else if(v.sa_handler==SIG_IGN)
printf("ignore...\n");
else if(v.sa_handler==isr)
printf("isr..\n");
else
printf("invalid...\n");
}
