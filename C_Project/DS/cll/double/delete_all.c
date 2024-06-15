#include"header.c"
void delete_all(ST **ptr)
{
	ST *temp,*tmp=*ptr;
	do
	{
		temp=*ptr;
		*ptr=(*ptr)->next;
		free(temp);
		temp=NULL;	
	}while(tmp!=*ptr);
	*ptr=0;
}
