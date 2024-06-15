#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
void isr(int n)
{
printf("in isr...\n");
}
int main()
{
if(fork()==0)
{
printf("child process pid:%d\n",getpid());
sleep(10);
printf("child exit...\n");
exit(0);
}
else
{
struct sigaction v;
v.sa_handler=isr;
sigemptyset(&v.sa_mask);
v.sa_flags=SA_NOCLDSTOP; //parent process will get notification only when child is
sigaction(17,&v,0); //terminated
while(1);
}
}
