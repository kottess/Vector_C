#include <stdio.h>
void main()
{
	int i, j, a[10][10], rsum[10]={0}, csum[10]={0}, n;
	printf("Input the size of the square matrix : ");
     	scanf("%d", &n); 
	printf("Input elements in the matrix :\n");
       	for(i=0;i<n;i++)
        {
        	for(j=0;j<n;j++)
            	{
	        	printf("element - [%d],[%d] : ",i,j);
	           	scanf("%d",&a[i][j]);
            	}
        }  
	printf("The matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	     		printf("%4d",a[i][j]);
	    	printf("\n");
	}
       	for(i=0;i<n;i++)
     	{
		for(j=0;j<n;j++)
	  		rsum[i]=rsum[i]+a[i][j];
     	}
        for(i=0;i<n;i++)
      	{
		for(j=0;j<n;j++)
			csum[i]=csum[i]+a[j][i];
      	}
       	printf("The sum of rows and columns of the matrix is :\n");
      	for(i=0;i<n;i++)
      	{
		for(j=0;j<n;j++)
	      		printf("%4d",a[i][j]);
	   	printf("%8d",rsum[i]);
	   	printf("\n");
       	}	
	printf("\n");
	for(j=0;j<n;j++)
        {
		printf("%4d",csum[j]);
        }
        printf("\n"); 
  }

