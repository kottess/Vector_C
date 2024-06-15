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
void print(ST *);
int count(ST *);
void delete(ST **,int);
int main()
{
   	ST *hptr=0;
	char ch; int roll;
	do
	{
		add_begin(&hptr);
		printf("Do you want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print(hptr);
	printf("No of nodes= %d\n",count(hptr));
	
	printf("Enter the roll no to delete\n");
	scanf("%d",&roll);
	delete(&hptr,roll);
	print(hptr);
}  
void add_begin(ST **ptr)
{
	ST *temp,*hd;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter the roll,name & marks\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
	if(*ptr==0)
		*ptr=temp;
	hd=temp->next=*ptr;
	
	while(hd->next!=*ptr)
		hd=hd->next;
	hd->next=*ptr=temp;
}
void print(ST *ptr)
{
	ST *temp=ptr;
	do
	{
		printf("%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;		
	}while(temp!=ptr);
}
int count(ST *ptr)
{
	int c=0; ST *temp=ptr;
	if(ptr==0)
		return c;
	else
	{
		do
		{
			ptr=ptr->next;
			c++;	
		}while(temp!=ptr);
		return c;	
	}
}
void delete(ST **ptr,int roll)
{
	ST *temp=*ptr,*prev;
	do
	{
		if(temp->roll==roll)
		{
			if(temp==*ptr)
			{
				ST *last=*ptr;
				while(last->next!=*ptr)
					last=last->next;
				last->next=*ptr=temp->next;
			}
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
	}while(temp!=*ptr);
	
	printf("Entered data is not present\n");
}
