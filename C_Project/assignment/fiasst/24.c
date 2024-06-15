#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[50];
	float marks;
	struct student *next;
}ST;
void add_end(ST **);
void print(ST *);
void save(ST *);
int count(ST *);
int main()
{
	ST *hptr=0;
	char op;
	do
	{
		add_end(&hptr);
		printf("Do you want to add another node(y/n)\n");
		scanf(" %c",&op);
	}while((op=='y')||(op=='Y'));
	printf("Node count %d\n",count(hptr));
	print(hptr);
	save(hptr);
	printf("Data is successfully saved into the file\n");
}

void add_end(ST **ptr)
{
	ST *temp=(ST *)malloc(sizeof(ST));
	printf("Enter the roll no,name & marks\n");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);
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

void print(ST *ptr)
{
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;	
	}
}

void save(ST *ptr)
{
	FILE *fp=fopen("data","w");
	while(ptr!=0)
	{
		fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;	
	}
}
