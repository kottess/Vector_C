#include<stdio.h>
#include<stdlib.h>
#define max 5
typedef struct student
{
	int roll;
	struct student *next;
}ST;
int node_count=0;
int top=0;
void push(ST **);
void pop(ST **);
void display(ST *);
int main()
{   
	ST *hptr=0; int op;
	while(1)
	{
		printf("Enter the option 1)Push 2)Pop 3)Display 4)Exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: push(&hptr); break;
			case 2: pop(&hptr); break;
			case 3: display(hptr); break;
			case 4: return 0;
			default : printf("Inalid option\n"); return 0;
		}	
	}
}

void push(ST **ptr)
{
	if(node_count==max)
	{
		printf("Stack overflow\n");
		return;
	}
	ST *temp;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter the element to push\n");
	scanf("%d",&temp->roll);
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
	node_count++;
}

void pop(ST **ptr)
{
	ST *prv,*last=*ptr;
	if(node_count==0)
	{
		printf("Stack underflow\n");
		return;
	}
	
	while(last->next!=0)
	{
		prv=last;
		last=last->next;
	}
	
	if(last==*ptr)
		*ptr=0;
	else
		prv->next=last->next;
	free(last);
	node_count--;
}

void display(ST *ptr)
{
	if(node_count==0)
	{
		printf("Stack is empty\n");
		return;
	}
	while(ptr!=0)
	{
		printf("%d ",ptr->roll);
		ptr=ptr->next;	
	}
	printf("\n");	
}
