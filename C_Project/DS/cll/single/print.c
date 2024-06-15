#include"header.c"
void print(ST *ptr)
{
	ST *temp=ptr;
	do
	{
		printf("%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;		
	}while(temp!=ptr);
}
