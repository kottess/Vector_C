#include <stdio.h>
void main()
{
	int a[3][3], i, j;
       	printf("Read a 2D array of size 3x3 and print the matrix :\n");
        printf("Input elements in the matrix :\n");
  	for(i=0;i<3;i++)
  	{
      		for(j=0;j<3;j++)
      		{
	      		printf("element - [%d],[%d] : ",i,j);
	      		scanf("%d",&a[i][j]);
      		}
  	}  
 
 	printf("The matrix is :\n");
  	for(i=0;i<3;i++)
  	{
        	for(j=0;j<3;j++)
        		printf("%4d",a[i][j]);
		printf("\n");  	
	}
} 

