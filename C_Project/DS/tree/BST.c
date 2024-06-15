#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
	struct BST *left;
	int roll;
	struct BST *right;
}TREE;
void add_tree(TREE **ptr,int n);
void post_order(TREE *ptr);
void pre_order(TREE *ptr);
void in_order(TREE *ptr);
int main()
{
	TREE *hptr = 0;
	int roll;  char op;

	do
	{
		printf("Enter the roll\n");
		scanf("%d",&roll);
		//printf("%p\n",hptr);
		add_tree(&hptr,roll);
		printf("Do u wants to add another node(y/n)?\n");
		scanf(" %c",&op);
	}while((op=='y')||(op=='Y'));	
	
	printf("\nPre-order\n");
	pre_order(hptr);
	printf("\nPost-order\n");
	post_order(hptr);
	printf("\nIn-order\n");                
	in_order(hptr);
	printf("\n");
}
void add_tree(TREE **ptr,int n)
{
	if(*ptr == 0)
	{
		*ptr=(TREE *)malloc(sizeof(TREE));
		(*ptr)->roll=n;
		//printf("r-%p &l-%p &r-%p\n",*ptr,&(*ptr)->left,&(*ptr)->right);
		(*ptr)->left=(*ptr)->right = 0;
	}
	else if(n<(*ptr)->roll)
	add_tree(&(*ptr)->left,n);
	else
	add_tree(&(*ptr)->right,n);
}
void pre_order(TREE *ptr)
{
	if(ptr!=0)
	{ 
		printf("%d ",ptr->roll); //root
		pre_order(ptr->left); //left
		pre_order(ptr->right);//right
	}
}
void post_order(TREE *ptr)
{
	if(ptr!=0)
	{
		post_order(ptr->left); //left
		post_order(ptr->right);//right
		printf("%d ",ptr->roll); //root
	}
}
void in_order(TREE *ptr)
{
	if(ptr!=0)
	{
		in_order(ptr->left); //left
		printf("%d ",ptr->roll); //root
		in_order(ptr->right);//right
	}
}

