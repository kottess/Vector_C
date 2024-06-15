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
void print(ST *);
int count(ST *);
void save(ST *);
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_end(&hptr);
		printf("Do u want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print(hptr);
	save(hptr);
	int r=count(hptr);
	printf("No of nodes=%d\n",r);
}
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
void print(ST *ptr)
{
	if(ptr!=0)
	{
		printf("%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;	
		print(ptr);
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
