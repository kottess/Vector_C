#include <stdio.h>
void checkForSum (int a[], int n, int s)
{
	int i,j;
    	for(i=0;i<n-1;i++)
    	{
              	for(j=i+1;j<n;j++)
        	{
               		if (a[i] + a[j] == s)
            		{
                	printf("Pair of elements can make the given sum by the value of index %d and %d\n", i, j);
                	return;
            		}
        	}
    	}
    printf("No Pair can make the given sum\n");
}
 
int main()
{
	int a[50], s, n, i;
	printf("Input the size of array : ");
       	scanf("%d", &n);
     	printf("Input %d elements in the array :\n",n);
       	for(i=0;i<n;i++)
        {
		printf("element - %d : ",i);
	      	scanf("%d",&a[i]);
	}
	printf("Enter the sum value\n");
	scanf("%d",&s);	
	printf("The given array : ");
    	for(i=0;i<n;i++)
    		printf("%d  ",a[i]);
	printf("\nThe given sum : %d\n",s);
	checkForSum(a, n, s);
    	return 0;
}

