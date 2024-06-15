#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>
void isr(int n)
{
printf("in isr...\n");
wait(0);
}
int main()
{
if(fork()==0)
{
printf("in child process pid %d\n",getpid()); //exclusively child
sleep(10);
printf("child termianted...\n");
exit(0);
}
else
{
signal(17,isr);
while(1);	//exclusively parent
}
}
