#include<stdio.h>
#include<stdlib.h>
#define max 5
int node_count=0;
typedef struct student
{
	int roll;
	struct student *next;
}ST; 
void enqueue(ST **);
void display(ST *);
void dequeue(ST **);
int main()
{
	ST *hptr=0;
	int op; char ch;
	while(1)
	{
		printf("Enter the option 1)Enqueue 2)Dequeue 3)display 4)exit\n");
		scanf("%d",&op);
	
		switch(op)
		{	
			case 1:enqueue(&hptr); break;
			case 2:dequeue(&hptr); break;
			case 3:display(hptr); break;
			case 4:printf("Queue is over\n"); return 0;
			default :printf("Invalid option\n");
		}
	}		
}
void enqueue(ST **ptr) //add_end()
{
	if(node_count==5)
	{
		printf("queue overflow\n");
		return;
	}

	ST *temp=(ST *)malloc(sizeof(ST));
	printf("Enter the element\n");
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
void dequeue(ST **ptr)
{
	ST *temp;
	if(node_count==0)
	{
		printf("queue underflow\n");
		return;
	}
	temp=*ptr;
	*ptr=(*ptr)->next;
	free(temp);
	temp=NULL;
	node_count--;
}
void display(ST *ptr)
{
	if(node_count==0)
	{
		printf("queue underflow\n");
		return;
	}
	while(ptr!=0)
	{
		printf("%d ",ptr->roll);
		ptr=ptr->next;	
	}
	printf("\n");

}
