#include"header.c"
void delete(ST **ptr,int roll)
{
	ST *temp=*ptr,*prev;
	do
	{
		if(temp->roll==roll)
		{
			if(temp==*ptr)
			{
				ST *last=*ptr;
				while(last->next!=*ptr)
					last=last->next;
				last->next=*ptr=temp->next;
			}
			else
				prev->next=temp->next;
			free(temp);
			temp=NULL;
			return;
		}
		else
		{
			prev=temp;
			temp=temp->next;
		}
	}while(temp!=*ptr);
	
	printf("Entered data is not present\n");
}
