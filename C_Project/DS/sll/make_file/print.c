#include"header.c"
void print(ST *ptr)
{
	if(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		print(ptr->next);	
	}

} 
