#include <stdio.h>
void main()
{
	int a[50], n, i, j=0, lrg, lrg2;
  	printf("Input the size of array : ");
       	scanf("%d", &n);
     	printf("Input %d elements in the array :\n",n);
       	for(i=0;i<n;i++)
        {
		printf("element - %d : ",i);
	      	scanf("%d",&a[i]);
	}
   	lrg=lrg2=a[0];
  	for(i=1;i<n;i++)
  	{	
      		if(lrg<a[i])
		{
        		lrg=a[i];
        	 	j = i;
      		}
  	}	
  	for(i=0;i<n;i++)
  	{
     		if(i==j)
        	{
          		i++;  
			i--;
        	}
      		else
        	{
        		if(lrg2<a[i])
	     		{
               			lrg2=a[i];
             		}
        	}
  	}

  	printf("The Second largest element in the array is :  %d \n", lrg2);
}

