#include <stdio.h>
void main()
{
	int a[50][50], b[50][50], i, j, r, c;
        printf("\nInput the rows and columns of the matrix : ");
       	scanf("%d %d",&r,&c);
	printf("Input elements in the first matrix :\n");
       	for(i=0;i<r;i++)
        {
        	for(j=0;j<c;j++)
            	{
	        	printf("element - [%d],[%d] : ",i,j);
	           	scanf("%d",&a[i][j]);
            	}
        } 
 	printf("The matrix is :\n");
 	for(i=0;i<r;i++)
	{
      		for(j=0;j<c;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
  	for(i=0;i<r;i++)
     	{
      		for(j=0;j<c;j++)
            	{
                	b[j][i]=a[i][j];
            	}
      	}
      	printf("The transpose of a matrix is :\n");
      	for(i=0;i<r;i++)
	{
	      	for(j=0;j<c;j++)
		       	printf("%4d",b[i][j]);
		printf("\n");
      	}
}

