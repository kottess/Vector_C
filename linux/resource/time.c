#include<stdio.h>
#include<time.h>
main()
{
time_t t;
while(1)
{
time(&t);
printf("%u\n",t);
printf("%s\n",ctime(&t));
sleep(1);
system("clear");
}
}
