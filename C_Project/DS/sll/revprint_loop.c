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
void revprint(ST *);
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
	revprint(hptr);
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
		printf("%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);			
		ptr=ptr->next;			
	}
}
void revprint(ST *ptr)
{
	int i,j; ST *temp;
	for(i=0;i<c;i++)
	{	
		for(j=0,temp=ptr;j<c-i-1;j++)
			temp=temp->next;
		printf("%d %s %.2f\n",temp->roll,temp->name,temp->marks);
	}
}
