#include"header.c"
void delete(ST **ptr,int roll)
{
	ST *temp=*ptr,*prev;
	while(temp!=0)
	{
		if(temp->roll==roll)
		{
			if(temp==*ptr)
				*ptr=temp->next;
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
	}
	printf("Entered data is not present\n");
}

