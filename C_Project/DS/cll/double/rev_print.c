#include"header.c"
void rev_print(ST *ptr)
{
	int i, c=count(ptr);
	ST **p=(ST **)malloc(c*sizeof(ST *));
	for(i=0;i<c;i++)
	{
		p[i]=ptr;
		ptr=ptr->next;	
	}
	printf("Printing nodes in reverse\n");
	for(i=c-1;i>=0;i--)
			printf("%d %s %.2f\n",p[i]->roll,p[i]->name,p[i]->marks);
}
