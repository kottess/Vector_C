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
void check(ST *);
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_end(&hptr);
		printf("Do you want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	check(hptr);
}

//circular
/*
void add_end(ST **ptr)
{
	ST *temp;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter the roll,name & marks\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
	if(*ptr==0)
	{
		*ptr=temp;
		temp->next=*ptr;	
	}
	else
	{
		ST *last=*ptr;
		while(last->next!=*ptr)
			last=last->next;
		temp->next=last->next;
		last->next=temp;	
	}
}
*/
//single 
void add_end(ST **ptr)
{
	ST *temp;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter the roll,name & marks\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;	
	}
	else
	{
		ST *last=*ptr;
		while(last->next!=0)
			last=last->next;
		temp->next=last->next;
		last->next=temp;	
	}
}
//*/
void check(ST *ptr)
{
	ST *slow,*fast;
	fast=slow=ptr;
	
	while(1)
	{
		if((fast==0)||(fast->next==0))
		{
			printf("Linked list is Single\n");
			break;
		}
		else if(fast=fast->next);
		else if((fast->next==ptr)||(fast==slow)||(fast->next==slow))
		{
			printf("Linked list is Circular\n");
			break;
		}	
		else
		{
			slow=slow->next;
			fast=fast->next;
		}
	}
	
}
