#include <stdio.h>

void main()
{
int i,j,arr1[50][50],arr2[50][50],r1,c1,r2,c2,flag=1;	
printf("Input rows and columns of 1st matrix : ");
scanf("%d %d",&r1,&c1); 

printf("Input rows and columns of 2nd matrix : ");
scanf("%d %d",&r2,&c2); 
	
printf("Input elements in the first matrix :\n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
        {
		printf("element - [%d],[%d] : ",i,j);
	        scanf("%d",&arr1[i][j]);
        }
}  
printf("Input elements in the second matrix :\n");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
        {
	        printf("element - [%d],[%d] : ",i,j);
	        scanf("%d",&arr2[i][j]);
        }
}  
printf("1st matrix is :\n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
    	    printf("%4d",arr1[i][j]);
        printf("\n");
}

printf("2nd matrix is :\n");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
		printf("%4d",arr2[i][j]);
	printf("\n");
}

if(r1==r2&&c1==c2)
{
	for(i=0;i<r1;i++)
	{	
		 for(j=0;j<c2;j++)
	         {
		 	if(arr1[i][j]!=arr2[i][j])
		   	{
				flag=0;
				break;
			}	
	    	}	
	}
}
else
{
	printf("Matrices cannot be compared\n");
	return;
}	
if(flag==1)
printf("Two matrices are equal\n");
else 
printf("Two matrices are not equal\n");
}    
 

