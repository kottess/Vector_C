#include<stdio.h>
int main()
{
	int n, i, a[50];
	printf("Input the number of elements to be stored in the array :");
        scanf("%d",&n);
        printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++)
     	{	
		printf("element - %d : ",i);	      			scanf("%d",&a[i]);
	}

	printf("Array elements\n");
	for(i=n-1;i>=0;i--)
		printf("%2d",a[i]);
	printf("\n");
}
