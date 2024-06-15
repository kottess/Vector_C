#include <stdio.h>
void main()
{
	int a[50], i, n, p;
        printf("Input the size of array : ");
        scanf("%d", &n);
        printf("Input %d elements in the array in ascending order:\n",n);
        for(i=0;i<n;i++)
        {
		printf("element - %d : ",i);
	        scanf("%d",&a[i]);
        }
	printf("Input the position, where the value to be deleted :");
   	scanf("%d",&p);
        printf("The current list of the array :\n");
   	for(i=0;i<n;i++)
      		printf("%d ",a[i]);   
   	i=0;
  	while(i!=p)
        	i++;
  	while(i<n)
	{
	        a[i]=a[i+1];
	        i++;
  	}
	n--;  		
	printf("\nAfter deleting the element, the new list is :\n");
        for(i=0;i<n;i++)
        	printf("%d ",a[i]);
	printf("\n");
}

