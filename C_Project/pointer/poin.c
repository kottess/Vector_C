#include<stdio.h>
struct emp
{
int eno;
char ename[20];
float esal;
};
void main()
{
char *cp;
int *ip;
struct emp *sep;
printf("sizeof char* is %d\n",sizeof(cp));
printf("sizeof int* is %d\n",sizeof(ip));
printf("sizeof emp* is %d\n",sizeof(sep));
}
