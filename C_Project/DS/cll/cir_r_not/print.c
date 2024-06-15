#include"header.c"
void print(ST *ptr)
{
	ST *temp=ptr;

	switch(check(ptr))
	{
		case 0: 	
			{
				do
				{	
					printf("%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);
					ptr=ptr->next;		
				}while(temp!=ptr);
			}
			break;

		case 1:
			{
				while(ptr!=0)
				{
					printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
					ptr=ptr->next;	
				}
			}
			break;
	}
} 
