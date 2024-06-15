#include"header.c"
void rev_data(ST *ptr)  //ST *ptr = hptr;
{
	printf("After reversing the data\n");
	int size,i,c;
	ST *p1,*p2,temp;
	p1 = p2 = ptr; //p1 points to starting addr

	size = sizeof(ST) - 2*sizeof(ST *);
	c = count(ptr);

	do
	{
		p2 = p2->next;
	}while(p2->next!=ptr);
		

	for(i=0;i<c/2;i++) 
	{
		memcpy(&temp.roll,&p1->roll,size);	
		memcpy(&p1->roll,&p2->roll,size);	
		memcpy(&p2->roll,&temp.roll,size);	
	
		p1 = p1->next;
		p2 = p2->prv;
	}
}
