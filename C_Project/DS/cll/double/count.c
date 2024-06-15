#include"header.c"
int count(ST *ptr)
{
	int c=0; ST *temp=ptr;
	if(ptr==0)
		return c;
	else
	{
		do
		{
			ptr=ptr->next;
			c++;	
		}while(temp!=ptr);
		return c;	
	}
}
