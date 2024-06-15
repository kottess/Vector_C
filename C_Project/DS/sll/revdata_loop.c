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
void revdata(ST *);
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
	printf("Nodes in reverse order\n");
	revdata(hptr);
	printf("Reverse data\n");
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
void revdata(ST *ptr)
{
	int i,j,size=sizeof(ST)-sizeof(ST *);
	ST *p1,*p2,temp;
	p1=ptr;
	for(i=0;i<c/2;i++)
	{
		p2=ptr;
		for(j=0;j<c-i-1;j++)
			p2=p2->next;
		memcpy(&temp,p1,size);
		memcpy(p1,p2,size);
		memcpy(p2,&temp,size);	
		p1=p1->next;
	}
}

