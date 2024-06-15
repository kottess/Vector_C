#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[30];
	float marks;
	struct student *next;
}ST;
void add_end(ST **,ST **);
void print(ST *);
int count(ST *);
void save(ST *);
int main()
{
	ST *hptr=0,*last;
	char ch;
	do
	{
		add_end(&hptr,&last);
		printf("Do u want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print(hptr);
	save(hptr);
	int r=count(hptr);
	printf("No of nodes=%d\n",r);
}
void add_end(ST **ptr,ST **last)
{
	ST *temp;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter the roll no,name & marks\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=*last=temp;
	} 
	else 
	{
		temp->next=(*last)->next;
		(*last)->next=temp;
		*last=temp;
	}

}
void save(ST *ptr)
{
	FILE *fp=fopen("add_end.txt","w");
	while(ptr!=0)
	{
		fprintf(fp,"%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;		
	}
	printf("Data is successfully saved into file\n");
}
void print(ST *ptr)
{
	if(ptr==0)
		return;
			
		print(ptr->next);
		printf("%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);

	
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
