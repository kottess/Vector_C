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
void add_middle(ST **);
void print(ST *);
void revlink(ST **);
int c=0;
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
	revlink(&hptr);
	printf("Reverse link\n");
	print(hptr);
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
	c++;
}
void print(ST *ptr)
{
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);			
		ptr=ptr->next;			
	}
}
void revlink(ST **ptr)
{
	int i;
	ST **p=(ST **)malloc(c*sizeof(ST *));
	
	for(i=0;i<c;i++)
	{
		p[i]=*ptr;
		*ptr=(*ptr)->next;
	
	}
	p[0]->next=0;
	for(i=1;i<c;i++)
	{
		p[i]->next=p[i-1];
	}
	*ptr=p[c-1];
}

