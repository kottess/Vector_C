#include <stdio.h>
int main()
{
	int num, limit, i, temp1, temp2;
	printf("\n Enter the limit : ");
	scanf("%d",&limit);
	for(i = 0; i < limit; i++)
	{
		printf("\nEnter number %d :",i+1);
		scanf("%d",&num);
		if(i == 0)
			temp1 = num;
		else
			temp2 = num;
		if(temp2 > temp1 )
			temp1 = num ;
	}
	printf("The biggest number is %d\n",temp1);
	return 0;
}
