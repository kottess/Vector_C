#include<stdio.h>
#define MAX 5
int Q[MAX],front = 0,rear = 0;
void enqueue();
void dequeue();
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
			case 1 : enqueue(); break;
			case 2 : dequeue(); break;
			case 3 : display(); break;
			case 4 : printf("Q operation is Over!\n");return 0;
			default: printf("Invalid option entered...\n"); break;
		}
	}
}
void enqueue()
{
	int ele;
	if(rear == MAX) 
	{
		printf("Q is Overflow...\n");
		return;
	}
	printf("Enter the element to insert...\n");
	scanf("%d",&ele);
	Q[rear++] = ele;
	printf("%d is inserted into Q...\n",ele);
}
void dequeue()
{
	if((rear == 0)||(front==rear)) 
	{
		printf("Q is Underflow...\n");
		return;
	}
	printf("%d is deleted from Q...\n",Q[front]);
	Q[front++] = 0;
}
void display()
{
	int i;
	for(i=0;i<MAX;i++)
		printf("%d ",Q[i]);
	printf("\n");
}
