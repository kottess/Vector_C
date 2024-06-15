#include"header.c"
int main()
{
   	ST *hptr=0;
	char ch; int roll;
	do
	{
		add_begin(&hptr);
		//add_end(&hptr);
		//add_middle(&hptr);
		printf("Do you want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print(hptr);
	printf("No of nodes= %d\n",count(hptr));

	//rev_print(hptr);

	//rev_link(&hptr);
	//print(hptr);

	//rev_data(hptr);
	//print(hptr);
/*	
	printf("Enter the roll no to delete\n");
	scanf("%d",&roll);
	delete(&hptr,roll);
	print(hptr);
*/	
	delete_all(&hptr);
	printf("After deleting all nodes,node count= %d\n",count(hptr));
}  
