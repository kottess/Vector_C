#include"header.c"
int main()
{	
	int roll; char ch; ST *hptr = 0; 
	do
	{
		//add_begin(&hptr);
		add_end(&hptr);
		//add_middle(&hptr);
		printf("Do you want to add another node?(y/n)\n");
		scanf(" %c",&ch);
	}while((ch == 'Y')||(ch == 'y'));
	
	printf("no of nodes= %d\n",count(hptr));
	save(hptr);

	print(hptr);
	printf("Printing the records in reverse...\n");
	rev_print(hptr);

/*
	rev_data(hptr);
	printf("after reversing the data\n");
*/
/*
	rev_link(&hptr);
	printf("after reversing the links\n");
*/
	printf("Enter the roll to delete\n");
	scanf("%d",&roll);

	delete(&hptr,roll);
	print(hptr);
	
	delete_all(&hptr);
	printf("no.of nodes after deleting all nodes= %d\n",count(hptr));
}
