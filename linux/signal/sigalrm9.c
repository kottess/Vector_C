#include<stdio.h>
#include<signal.h>
int n;
void isr(int m)
{
printf("in isr..\n");
n--;
if(n==0)
raise(9); //kill(getpid(),9)
else
{
printf("alaram signal is scheduled for this process after %d sec\n",n);
alarm(n);
}
}
int main(int argc,char *argv[])
{
signal(SIGALRM,isr);
if(argc!=2)
{
printf("./a.out n\n");
return 0;
}
printf("process is executing...\n");
n=atoi(argv[1]);
alarm(n);
printf("alarm signal scheduled for this process after %d sec\n",n);
while(1);
}
