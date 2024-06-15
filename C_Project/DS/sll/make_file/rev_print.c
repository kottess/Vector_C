#include"header.c"
/*
void rev_print(ST *ptr)
{
	if(ptr!=0)
	{
		rev_print(ptr->next);
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
	}
}
*/
void rev_print(ST *ptr)
{
	int i, c=count(ptr);
	ST **p=(ST **)malloc(c*sizeof(ST *));
	for(i=0;i<c;i++)
	{
		p[i]=ptr;
		ptr=ptr->next;	
		
	}	
	for(i=c-1;i>=0;i--)	
		printf("%d %s %f\n",p[i]->roll,p[i]->name,p[i]->marks);
}

 
