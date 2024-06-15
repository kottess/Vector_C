#include"header.c"
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_end(&hptr);
		//add_begin(&hptr);
		printf("Do you want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	check(hptr);
	printf("Node count=%d\n",count(hptr));
	print(hptr);
}
