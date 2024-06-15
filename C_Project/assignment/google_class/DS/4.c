#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	struct student *prv;
	int roll;
	char name[30];
	float marks;
	struct student *next;
}ST;
void add_begin(ST **);
void print(ST *);
void delete(ST **,int);
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_begin(&hptr);
		printf("Do u want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print(hptr);
			
	int roll;
	printf("Enter the roll to delete\n");
	scanf("%d",&roll);
	delete(&hptr,roll);
	print(hptr);
}
void add_begin(ST **ptr)
{
   ST *temp;	
   temp = (ST*)malloc(sizeof(ST));
   printf("Enter the roll,name & marks\n");
   scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);

   temp->prv = 0;
   temp->next = *ptr;
  
   if(*ptr != 0)
   (*ptr)->prv = temp;

   *ptr = temp;
}
void print(ST *ptr)
{
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);			
		ptr=ptr->next;			
	}
}
void delete(ST **ptr,int n) 
{					
	ST *temp = *ptr;
	ST *prv;
	while(temp != 0)
	{
		if(temp->roll == n)
		{
			if(temp == *ptr)
				*ptr = temp->next;
			else
				prv->next = temp->next;	

			free(temp);  temp = NULL;
			return;
		}
		else 
		{
			prv = temp;
			temp = temp->next;
		}
	}
	 printf("Entered data not present\n");
}
