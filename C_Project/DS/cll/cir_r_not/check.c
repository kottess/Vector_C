#include"header.c"
int check(ST *ptr)
{
	ST *slow,*fast;
	fast=slow=ptr;
/*	
	while(1)
	{
		if((fast==0)||(fast->next==0))
		{
			printf("Linked list is Single\n");
			return ;
		}
		else
			fast=fast->next;
		
		if((fast==0)||(fast->next==0))
		{
			printf("Linked list is Single\n");
			return ;
		}	
		else
		{
			slow=slow->next;
			fast=fast->next;
		}
		if((slow==fast)||(fast->next==ptr)||(fast->next==slow))	
		{
			printf("Linked list is Circluar\n");
			return ;
		}
	}
*/
	while(!slow && !fast && fast->next != NULL) 
	{
		if((fast==0)||(fast->next==0))
		{
			printf("Linked list is Single\n");
			return ;
		}
		
		if((slow==fast)||(fast->next==ptr)||(fast->next==slow))	
		{
			printf("Linked list is Circluar\n");
			return ;
		}		
		slow = slow->next;  // moves one node ahead at a time
	    fast = fast->next->next;  // moves two nodes ahead at a time
	}
}

