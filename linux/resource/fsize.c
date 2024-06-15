#include<stdio.h>
#include<sys/resource.h>
main()
{
char buf[20]="abcdefghijklmnopqr";
FILE *fp;
fp=fopen("temp","w");
if(fp==NULL)
{
printf("file not opened...\n");
return 0;
}
struct rlimit v;
getrlimit(RLIMIT_FSIZE,&v);
printf("soft:%u\n",v.rlim_cur);
printf("hard:%u\n",v.rlim_max);
v.rlim_cur=10;
setrlimit(RLIMIT_FSIZE,&v);
getrlimit(RLIMIT_FSIZE,&v);
printf("soft:%u\n",v.rlim_cur);
fprintf(fp,"%s",buf);
}
