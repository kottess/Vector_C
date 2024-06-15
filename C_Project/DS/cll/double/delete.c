#include"header.c"
void delete(ST **ptr,int n) 
{					
	ST *temp = *ptr;
	ST *prv;
	do
	{
		if(temp->roll == n)
		{
			if(temp == *ptr)
				*ptr = temp->next;
			else
				prv->next = temp->next;	

			free(temp);
			temp = NULL;
			return;
		}
		else 
		{
			prv = temp;
			temp = temp->next;
		}
	}while(*ptr!=temp);
	 printf("The data doesn't exist to delete\n");
}
