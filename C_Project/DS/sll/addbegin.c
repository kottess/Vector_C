#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[30];
	float marks;
	struct student *next;
}ST;
ST *hptr=0;
void add_begin();
void print();
int main()
{
	char ch;
	do
	{
		add_begin();
		printf("Do you want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print();
}
void add_begin()
{
	ST *temp;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter roll no,name,marks\n"); 
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
	temp->next=hptr;
	hptr=temp;
}
void print()
{
	ST *ptr;
	ptr=hptr;
	while(ptr!=0)
	{
		printf("%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;		
	}
}
