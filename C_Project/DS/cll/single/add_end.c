#include"header.c"
void add_end(ST **ptr)
{
	ST *temp;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter the roll,name & marks\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
	if(*ptr==0)
	{
		*ptr=temp;
		temp->next=*ptr;	
	}
	else
	{
		ST *last=*ptr;
		while(last->next!=*ptr)
			last=last->next;
		temp->next=last->next;
		last->next=temp;	
	}
}
