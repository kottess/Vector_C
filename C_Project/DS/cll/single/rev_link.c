#include"header.c"
void rev_link(ST **ptr)
{
	int i,c=count(*ptr);
	ST **p=(ST **)malloc(c*sizeof(ST *));
	for(i=0;i<c;i++)
	{
		p[i]=*ptr;
		*ptr=(*ptr)->next;
	}
	*ptr=p[0]->next=p[c-1];

	for(i=1;i<c;i++)
		p[i]->next=p[i-1];	
	printf("After reversing the link\n");
}
