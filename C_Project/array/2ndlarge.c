#include <stdio.h>

void main(){
  int arr1[50],n,i,j=0,lrg,lrg2nd;
  
       printf("Input the size of array : ");
       scanf("%d", &n);
    /* Stored values into the array*/
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

  for(i=0;i<n;i++)
   { 
   if(arr1[0]!=arr1[i])
   break;
   }
/* find location of the largest element in the array */		
//   lrg=arr1[0];
   lrg=0;
  for(i=0;i<n;i++)
  {
      if(lrg<arr1[i])
	  {
           lrg=arr1[i];
           j = i;
      }
  }

/* ignore the largest element and find the 2nd largest element in the array */		
   lrg2nd=0;
  for(i=0;i<n;i++)
  {
     if(i==j)
        {
          i++;  /* ignoring the largest element */
		  i--;
        }
      else
        {
          if(lrg2nd<arr1[i])
	     {
               lrg2nd=arr1[i];
             }
        }
  }
  printf("The First and Second largest element in the array is : %d & %d \n",lrg, lrg2nd);
}

