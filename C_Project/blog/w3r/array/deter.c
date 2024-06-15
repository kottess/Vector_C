#include <stdio.h>
void main()
{
	int i, j, a[10][10], det=0;
	printf("Input elements in the 3x3 matrix :\n");
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
	for(i=0;i<3;i++)
      		det=det+ (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));

  	printf("\nThe Determinant of the matrix is: %d\n",det);	 
}

