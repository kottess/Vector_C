#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	int roll;
	char name[30];
	float marks;
	struct student *next;
}ST;
void add_begin(ST **);
void print(ST *);
int count(ST *);
void delete(ST **,int);
