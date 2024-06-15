#include <stdio.h>
void main()
{
	int a[50], n, i, j=0, smll, smll2;
  	printf("Input the size of array : ");
       	scanf("%d", &n);
     	printf("Input %d elements in the array :\n",n);
       	for(i=0;i<n;i++)
        {
		printf("element - %d : ",i);
	      	scanf("%d",&a[i]);
	}
   	smll=smll2=a[0];
  	for(i=1;i<n;i++)
  	{	
      		if(smll>a[i])
		{
        		smll=a[i];
        	 	j = i;
      		}
		if(smll2<a[i])
		{	
			smll2=a[i];
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
        		if(smll2>a[i])
	     		{
               			smll2=a[i];
             		}
        	}
  	}

  	printf("The Second smallest element in the array is :  %d \n", smll2);
}

