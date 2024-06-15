#include<stdio.h>
int main()
{
	int n, i, j, k, count, a[50];
	printf("Input the number of elements to be stored in the array :");
        scanf("%d",&n);
        printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++)
     	{	
		printf("element - %d : ",i);	      			scanf("%d",&a[i]);
	}
	printf("Unique elements in an array\n");	
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{			
				count++;			
			}
			
		}		
		for(k=i+1;k<n;k++)
		{
			if(a[i]==a[k])
			{			
				count++;			
			}
		}
		if(count==0)
		printf("%2d",a[i]);
	}	
	printf("\n");
}
