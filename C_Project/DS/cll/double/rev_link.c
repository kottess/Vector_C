#include"header.c"
void rev_link(ST **ptr)
{
	ST *temp,*t=*ptr;
	do
	{
		temp=(*ptr)->prv;
		(*ptr)->prv=(*ptr)->next;
		(*ptr)->next=temp;
		
		*ptr=(*ptr)->prv;
		
	}while(*ptr!=t);	
	*ptr=temp->prv;
}
