#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
	struct student *prv;
	int roll;
	char name[20];
	float marks;
	struct student *next;
}ST;
void add_begin(ST **);
void add_middle(ST **);
void add_end(ST **);
int count(ST *);
void print(ST *);
void rev_print(ST *);
void rev_data(ST *);
void rev_link(ST **);
void delete(ST **,int);
void delete_all(ST **);
void save(ST *);
