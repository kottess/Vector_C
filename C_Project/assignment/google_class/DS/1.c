#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[30];
	float marks;
	struct student *next;
}ST;
void add_middle(ST **);
void print(ST *);
int count(ST *);
void revlink(ST **);
void delete_all(ST **);
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_middle(&hptr);
		printf("Do u want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print(hptr);
	printf("Node count- %d",count(hptr));
	revlink(&hptr);
	printf("After reversing the link\n");	
	print(hptr);
	
	delete_all(&hptr);
	printf("After deleting all node,node count- %d\n",count(hptr));
}
void add_middle(ST **ptr)
{
	ST *temp;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter the roll no,name & marks\n");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);
	if((*ptr==0)||(temp->roll<(*ptr)->roll))
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;
		while((last->next!=0)&&(temp->roll > last->next->roll))
			last=last->next;
		temp->next=last->next;
		last->next=temp;
	}
}
void print(ST *ptr)
{
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);			
		ptr=ptr->next;			
	}
}
int count(ST *ptr)
{
	int c=0;
	while(ptr!=0)
	{
		ptr=ptr->next;	
		c++;
	}
	return c;
}
void revlink(ST **ptr)
{
	ST *q=0,*r;
	while(*ptr!=0)
	{
		r=q;
		q=*ptr;
		*ptr=(*ptr)->next;
		q->next=r;
	}
	*ptr=q;
}
void delete_all(ST **ptr)
{
	ST *temp;
	while(*ptr!=0)
	{
		temp=*ptr;
		free(temp);
		temp=NULL;
		*ptr=(*ptr)->next;	
	}
}
