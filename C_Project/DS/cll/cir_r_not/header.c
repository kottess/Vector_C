#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[30];
	float marks;
	struct student *next;
}ST;
void add_end(ST **);
void addbegin(ST **);
int check(ST *);
int count(ST *);
void print(ST *);
