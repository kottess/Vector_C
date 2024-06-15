#include <stdio.h>
void main()
{
	int a[50], i, n, p, val;
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
   	printf("The exist array list is :\n");
   	for(i=0;i<n;i++)
      		printf("%d ",a[i]);   
     	for(i=0;i<n;i++)
     	{	
		if(val<a[i])
     		{
       			p = i;
       			break;
     		}
	}
   	for(i=n;i>=p;i--)
      		a[i]= a[i-1];
        a[p]=val;
	n++;
      	printf("\nAfter Insert the list is:\n");
   	for(i=0;i<n;i++)
   		printf("%d ",a[i]);
	printf("\n");
}

