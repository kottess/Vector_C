#include<stdio.h>
#include<signal.h>
void isr(int n)
{

}
int main()
{
void (*p)(int);
int n;
signal(2,isr);
// 2 ----> isr
signal(3,SIG_IGN);
printf("enter signal number...\n");
scanf("%d",&n);
p=signal(n, SIG_DFL);//set dummy action signal returns current action
signal(n,p);
if(p==SIG_DFL)
printf("default...\n");
else if(p==SIG_IGN)
printf("ignore...\n");
else if(p==isr)
printf("isr..\n");
else
printf("Invalid argument\n");
}
