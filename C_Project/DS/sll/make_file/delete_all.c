#include"header.c"
void delete_all(ST **ptr)
{
	ST *temp;
	
    while(*ptr != 0)
    {
		temp = *ptr;
		*ptr = (*ptr)->next;
		free(temp);
		temp=NULL;
    }
}
