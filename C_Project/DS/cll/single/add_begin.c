#include"header.c"
void add_begin(ST **ptr)
{
	ST *temp,*hd;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter the roll,name & marks\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);
	if(*ptr==0)
		*ptr=temp;
	hd=temp->next=*ptr;
	
	while(hd->next!=*ptr)
		hd=hd->next;
	hd->next=*ptr=temp;
}
