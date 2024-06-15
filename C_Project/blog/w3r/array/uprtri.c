#include <stdio.h>
void main()
{
	int i, j, a[10][10], n;
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
      		printf("\n");
      		for(j=0;j<n;j++)
           	{	
			if(i>=j)
             		printf("%4d",a[i][j]);
   		        else
             		printf("%4d",0);
  		}
	}
        printf("\n"); 
}

