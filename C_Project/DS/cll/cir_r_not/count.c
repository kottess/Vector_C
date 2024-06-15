#include"header.c"
int count(ST *ptr)
{
	int c=0;
	ST *slow,*fast;
	fast=slow=ptr;
	
	while(1)
	{
		if((fast==0)||(fast->next==0));
		else
			fast=fast->next;
		
		if((fast==0)||(fast->next==0));	
	
		else
		{
			c++;
			slow=slow->next;
			fast=fast->next;
		}
		if(slow==fast)	
			return c;
	}
}
