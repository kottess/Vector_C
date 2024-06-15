#include<stdio.h>
#define max 5
int stck[max];
int top=0;
void push();
void pop();
void display();
int main()
{
	int op;
	while(1)
	{
		printf("Enter the option 1)Push 2)Pop 3)Display 4)Exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: return 0;
			default : printf("Inalid option\n"); return 0;
		}	
	}
}

void push()
{
	if(top==max)
	{
		printf("Stack overflow\n");
		return;
	}
	int n;
	printf("Enter the element to push\n");
	scanf("%d",&n);
	stck[top++]=n;
}

void pop()
{
	if(top==0)
	{
		printf("Stack underflow\n");
		return;
	}
	printf("%d is popped\n",stck[top-1]);
	stck[--top]=0;
}

void display()
{
	if(top==0)
	{
		printf("Stack is empty\n");
		return;
	}
	int i;
	for(i=0;i<top;i++)
		printf("%d ",stck[i]);
	printf("\n");	
}
