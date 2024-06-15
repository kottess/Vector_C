#include<stdio.h>
#define MAX 5
int CQ[MAX],front = 0,rear = 0,flag = 0;
void insert();
void delete();
void display();
int main()
{
	int op;
	while(1)
	{
		printf("Enter the option 1)insert 2)delete 3)display 4)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1 : insert(); break;
			case 2 : delete(); break;
			case 3 : display(); break;
			case 4 : return 0;
			default: printf("Invalid option entered...\n"); break;
		}
	}
}
void insert()
{
	int num;
	if(flag && rear >= front) 
	{
		printf("CQ is Overflow...\n");
		return;
	}
	printf("Enter the data to insert...\n");
	scanf("%d",&num);
	CQ[rear++] = num;
	printf("%d is inserted in CQ...\n",num);
	if(rear == MAX) 
	{
		flag = !flag;
		rear = 0;
	}
}
void delete()
{
	if( (!flag)&&(front >= rear) ) 
	{
		printf("CQ is Underflow...\n");
		return;
	}
	printf("%d is deleted...\n",CQ[front]);
	CQ[front++] = 0;
	if(front == MAX) 
	{
		flag = !flag;
		front = 0;
	}
}
void display()
{
	int i;
	for(i=0;i<5;i++)
		printf("%d ",CQ[i]);
	printf("\n");
}	
