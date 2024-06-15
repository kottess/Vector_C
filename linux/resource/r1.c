#include<stdio.h>
#include<sys/resource.h>
int main()
{
struct rlimit v;
getrlimit(RLIMIT_STACK,&v);
printf("soft:%u\n",(unsigned)v.rlim_cur);
printf("hard:%u\n",(unsigned)v.rlim_max);
v.rlim_cur=1000;
//v.rlim_max=10000;
setrlimit(RLIMIT_STACK,&v);
getrlimit(RLIMIT_STACK,&v);
printf("soft:%u\n",(unsigned)v.rlim_cur);
printf("hard:%u\n",(unsigned)v.rlim_max);
}
