#include"header.c"
void rev_link(ST **ptr)
{
	ST *q=0,*r;
	while(*ptr!=0)
	{
		r=q;
		q=*ptr;
		*ptr=(*ptr)->next;
		q->next=r;
	}
	*ptr=q;
}

