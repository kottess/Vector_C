/*
to compile cc -nostartfiles filename.c
*/
#include<stdio.h>
#include<stdlib.h>
void func();
int vector()	
{
printf("vector()..\n");
func();
exit(0);//if not provided exit() segmentation fault occurs
}
void func()
{
printf("func()..\n");
}	
