#include"header.c"
void add_middle(ST **ptr)
{
	ST *temp,*end;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter the roll no,name & marks\n");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);
	if((*ptr==0)||(temp->roll<(*ptr)->roll))
	{
		if(*ptr==0)
		{
			*ptr=temp;
			temp->next=*ptr;
		}
		else
		{
			end=temp->next=*ptr;
			while(end->next!=*ptr)
				end=end->next;
			
			*ptr=end->next=temp;
		}
	}
	else
	{
		ST *last=*ptr;
		while((last->next!=*ptr)&&(temp->roll > last->next->roll))
			last=last->next;
		
		temp->next=last->next;
		last->next=temp;
	}
}
