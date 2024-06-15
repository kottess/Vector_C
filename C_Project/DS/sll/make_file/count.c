#include"header.c"
int count(ST *ptr)
{
	int c=0;
	while(ptr!=0)
	{
		ptr=ptr->next;	
		c++;
	}
	return c;
} 
