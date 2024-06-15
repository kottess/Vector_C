#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void isr(int n)
{
//signal catching function(or)isr
printf("in isr body...\n");
}
int main()
{
int ret;
printf("process is executing...\n");
signal(2,isr);
//signal(3,isr);
printf("after signal function...\n");
printf("before pause..\n");
ret=pause(); 
printf("after pause...\n");
printf("ret=%d\n",ret);
while(1);
}
