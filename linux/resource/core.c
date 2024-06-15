#include<stdio.h>
#include<sys/resource.h>
main()
{
struct rlimit v;
getrlimit(RLIMIT_CORE,&v);
printf("soft:%u\n",v.rlim_cur);
printf("hard:%u\n",v.rlim_max);
}
