#include"header.c"
int main()
{	
	ST *hptr = 0;
	char ch;int roll;
	do
	{
		add_begin(&hptr);
		//add_end(&hptr);
		//add_middle(&hptr);
		printf("Do you want to add another node?(y/n)\n");
		scanf(" %c",&ch);
	}while((ch == 'Y')||(ch == 'y'));

	printf("no.of nodes = %d\n",count(hptr));
	print(hptr);
	save(hptr);	
/*
	printf("Printing the records in reverse...\n");
	rev_print(hptr);

	rev_data(hptr);
	print(hptr);
*/
	rev_link(&hptr);
	printf("after reversing the links\n");
	print(hptr);

/*
	printf("Enter the roll to delete\n");
	scanf("%d",&roll);

	delete(&hptr,roll);
	print(hptr);
*/
	delete_all(&hptr);
	printf("After deleting all nodes,no.of nodes = %d\n",count(hptr));
}
