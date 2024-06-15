#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	struct student *next;
}ST;
void add_end(ST **);
int count(ST *);
void print(ST *);
void palin(ST *);
int main()
{
	ST *hptr=0; char ch;
	do
	{
		add_end(&hptr);
		printf("Do u want to add another node?(y/n)\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print(hptr);
	palin(hptr);
} 
void add_end(ST **ptr)
{
	ST *temp=(ST *)malloc(sizeof(ST));
	printf("Enter the roll no\n");
	scanf("%d",&temp->roll);
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
		c++;
		ptr=ptr->next;
	}	
	return c;
}
void print(ST *ptr)
{
	while(ptr!=0)
	{
		printf("%d ",ptr->roll);
		ptr=ptr->next;
	}
	printf("\n");
}
void palin(ST *ptr)
{
	int i,j,n=0,c=count(ptr);
	int *p=(int *)malloc(c*sizeof(int));
	for(i=0;i<c;i++)
	{
		p[i]=ptr->roll;
		ptr=ptr->next;	
	}
	for(i=0,j=c-1;i<j;i++,j--)
	{
		if(p[i]!=p[j])
			break;
		else
			n++;	
	}
	if(n==0)
		printf("Not palindrome\n");
	else
		printf("Its a palindrome\n");
}
