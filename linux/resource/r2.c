#include<sys/resource.h>
#include<stdio.h>
int main()
{
struct rlimit v;
getrlimit(RLIMIT_CPU,&v);printf("soft and hard limit values provided by os..\n");
printf("soft:%u\n",(unsigned)v.rlim_cur);
printf("hard:%u\n",(unsigned)v.rlim_max);
v.rlim_cur=10;
printf("soft limit value updated to 10 seconds...\n");
setrlimit(RLIMIT_CPU,&v);
printf("soft and hard limit values after modification...\n");
printf("soft:%u\n",(unsigned)v.rlim_cur);
printf("hard:%u\n",(unsigned)v.rlim_max);
printf("process executing with while(1);\n");
while(1);
}
