#include<stdio.h>
int main()
{
	int a[50], b[50], n, i;
	printf("Input the number of elements to be stored in the array :");
        scanf("%d",&n);
        printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++)
     	{	
		printf("element - %d : ",i);	      			scanf("%d",&a[i]);
        }
	for(i=0;i<n;i++)
		b[i]=a[i];
	printf("Copy of array elements\n");
	for(i=0;i<n;i++)
		printf("%2d",b[i]);
	printf("\n");
}
