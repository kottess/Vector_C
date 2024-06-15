#include <stdio.h>
void main()
{
	int i, j, a[50][50], sum=0, sum1=0, n, m;
	printf("Input the size of the square matrix : ");
     	scanf("%d", &n);
	m=n; 
	printf("Input elements in the first matrix :\n");
       	for(i=0;i<n;i++)
        {
        	for(j=0;j<n;j++)
            	{
	        	printf("element - [%d],[%d] : ",i,j);
	          	scanf("%d",&a[i][j]);
		}
        }
       	for(i=0;i<n;i++)
	{
        	m=m-1;
		for(j=0;j<n;j++)
         	{
            		if(j==m) 
			sum1=sum1+a[i][j];//left diagonal
                 	if(i==j) 
			sum=sum+a[i][j];//right diagonal
            	}
	 }  
	printf("The matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	        	printf("%4d",a[i][j]);
	    	printf("\n");
	}
        printf("Addition of the right Diagonal elements is :%d\n",sum);
	printf("Addition of the left  Diagonal elements is :%d\n",sum1);
}

