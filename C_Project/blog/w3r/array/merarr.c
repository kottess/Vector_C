#include<stdio.h>
int main()
{
	int n, n1, n2, i, j, temp, a[50], b[50], c[50];	
	printf("Input the number of elements to be stored in the 1st array :");
        scanf("%d",&n);
        printf("Input %d elements in the 1st array :\n",n);
        for(i=0;i<n;i++)
     	{	
		printf("element - %d : ",i);	      			scanf("%d",&a[i]);
	}
	printf("Input the number of elements to be stored in the 2nd array :");
        scanf("%d",&n1);
        printf("Input %d elements in the 2nd array :\n",n1);
        for(i=0;i<n1;i++)
     	{	
		printf("element - %d : ",i);	      			scanf("%d",&b[i]);
	}	
	n2=n+n1;
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}		
	for(j=0;j<n1;i++,j++)
	{
		c[i]=b[j];
	}		
	for(i=0;i<n2-1;i++)
	{
		for(j=i+1;j<n2;j++)
		{
			if(c[i]<=c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}		
		}	
	}
	printf("Sorted in reverse\n");
	for(i=0;i<n2;i++)
		printf("%2d",c[i]);
	printf("\n");
}
