#include<stdio.h>
int main()
{
	int n, i, j, count=0, m=1, a[50], b[50], c[50];
	printf("Input the number of elements to be stored in the array :");
        scanf("%d",&n);
        printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++)
     	{	
		printf("element - %d : ",i);	      			scanf("%d",&a[i]);
        }
	for(i=0;i<n;i++)
		b[i]=a[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{			
				c[j]=m;
				m++;			
			}
		}		
		m=1;
	}
	for(i=0;i<n;i++)
	{
		if(c[i]==2)
		count++;
	}
	printf("No of duplicate elements in an array: %d\n",count);
}
