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
void add_end(ST **);
void add_middle(ST **);
void print(ST *);
int count(ST *);
void save(ST *);
void rev_print(ST *);
void rev_link(ST **);
void rev_data(ST *);
void delete(ST **,int);
void delete_all(ST **);
