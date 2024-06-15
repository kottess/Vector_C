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
void delete(ST **,int);
int main()
{
	ST *hptr=0;
	char ch;int roll;
	do
	{
		add_end(&hptr);
		printf("Do u want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print(hptr);
	
	printf("Enter the roll no to delete\n");
	scanf("%d",&roll);
	delete(&hptr,roll);
	print(hptr);
	
	
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

