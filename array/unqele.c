#include <stdio.h>
void main()
{
    int arr1[100], n,ctr=0;
    int i, j, k; 
       printf("Print all unique elements of an array:\n");
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    printf("\nThe unique elements found in the array are : \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
		/*Check duplicate bifore the current position and
		increase counter by 1 if found.*/
        for(j=0; j<i-1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if(arr1[i]==arr1[j])
            {
                ctr++;
            }
        }
        /*Check duplicate after the current position and
		  increase counter by 1 if found.*/
       for(k=i+1; k<n; k++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if(arr1[i]==arr1[k])
            {
                ctr++;
            }
        }
		/*Print the value of the current position of the array as unique value 
		when counter remain contains its initial value.*/
       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
    }
}

