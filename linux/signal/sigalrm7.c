#include<stdio.h>
#include<signal.h>
int c,d;
void isr(int n)
{
if(n==2)
{
c++;
if(c==4)
{
printf("signal no 2 action modified to default..\n");
signal(2,SIG_DFL);
}
}
else if(n==3)
{
d++;
if(d==2)
{
printf("signal no 3 action modified to default...\n");
signal(3,SIG_DFL);
}
}
}
int main()
{
signal(2,isr);
signal(3,isr);
printf("process is executing...\n");
while(1);
}
