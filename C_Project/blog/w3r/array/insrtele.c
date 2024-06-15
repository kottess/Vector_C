#include <stdio.h>
void main()
{
	int a[100], i, n, p, val;
        printf("Input the size of array : ");
        scanf("%d", &n);
        printf("Input %d elements in the array in ascending order:\n",n);
        for(i=0;i<n;i++)
        {
		printf("element - %d : ",i);
	        scanf("%d",&a[i]);
        }
	printf("Input the value to be inserted : ");
  	scanf("%d",&val);
   	printf("Input the position, where the value to be inserted :");
   	scanf("%d",&p);
        printf("The current list of the array :\n");
   	for(i=0;i<n;i++)
      		printf("%d ",a[i]);   
   	for(i=n;i>=p;i--)
   		a[i]= a[i-1];
   	a[i]=val;
        printf("\nAfter inserting the element, the new list is :\n");
        for(i=0;i<=n;i++)
        	printf("%d ",a[i]);
	printf("\n");
}

