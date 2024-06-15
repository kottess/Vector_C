#include<stdio.h>
#include<signal.h>
void isr(int n)
{
int i;
printf("\n in isr...\n");
for(i=0;i<2000000000;i++);
for(i=0;i<2000000000;i++);
printf("isr completed...\n");
}
int main()
{
signal(2,isr);
printf("process is executing...\n");
printf("pid:%d\n",getpid());
while(1);
}
