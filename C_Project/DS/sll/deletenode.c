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
void delete(ST **,int);
int c=0;
int main()
{
	ST *hptr=0;
	char ch; int roll;
	do
	{
		add_middle(&hptr);
		printf("Do u want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print(hptr);
	printf("Enter the roll no to delete\n");
	scanf("%d",&roll);
	delete(&hptr,roll);
	printf("After deletion\n");
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
void delete(ST **ptr,int roll)
{
	ST *temp=*ptr,*prev;
	while(temp!=0)
	{
		if(temp->roll==roll)
		{
			if(temp==*ptr)
				*ptr=temp->next;
			else
				prev->next=temp->next;			
			free(temp);
			temp=NULL;
			return;
		}
		else
		{
			prev=temp;
			temp=temp->next;
		}
	}
	printf("Entered data is not present\n");
}
