#include"header.c"
void save(ST *ptr)
{
	FILE *fp=fopen("data.txt","w");
	ST *temp=ptr;
	do
	{
		fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}while(ptr!=temp);
	fclose(fp);
}
