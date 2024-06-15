#include<stdio.h>
int main()
{
int num=1;
if(num++,num--,++num)
switch (num)
{
case 1: printf("1"); break;
case 2: printf("2"); break;
case 3: printf("3"); break;
default : printf("D"); break;

}
}
