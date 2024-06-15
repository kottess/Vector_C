#include <stdio.h>
void main()
{
	int a1[100], n, i, j, temp;
	printf("Input the size of array : ");
    	scanf("%d", &n);
	printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++)
        {
		printf("element - %d : ",i);
 		scanf("%d",&a1[i]);
	}
	for(i=0;i<n;i++)
    	{
        	for(j=i+1;j<n;j++)
        	{
        		if(a1[i]<a1[j])
            		{
                		temp=a1[i];
                		a1[i]=a1[j];
                		a1[j]=temp;
            		}
        	}
    	}
    	printf("Elements of array in sorted descending order:\n");
    	for(i=0;i<n;i++)
           	printf("%d ",a1[i]);
        printf("\n");
}

