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
	ST **a=(ST **)malloc(c*sizeof(ST *)), temp;
	for(i=0;i<c;i++)
	{
		a[i]=ptr;
		ptr=ptr->next;
	}	
	for(i=0,j=c-1;i<j;i++,j--)
	{
		memcpy(&temp,a[i],size);
		memcpy(a[i],a[j],size);
		memcpy(a[j],&temp,size);	
	}
}

