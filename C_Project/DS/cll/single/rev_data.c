#include"header.c"
void rev_data(ST *ptr)
{
	int i,j,c=count(ptr),size=sizeof(ST)-sizeof(ST *);
	ST temp,**p=(ST **)malloc(c*sizeof(ST *));
	for(i=0;i<c;i++)
	{
		p[i]=ptr;
		ptr=ptr->next;
	}
	
	for(i=0,j=c-1;i<j;i++,j--)
	{
		memcpy(&temp,p[i],size);
		memcpy(p[i],p[j],size);
		memcpy(p[j],&temp,size);
	}
	printf("After reversing the data\n");
}
