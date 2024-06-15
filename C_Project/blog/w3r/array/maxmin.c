#include <stdio.h>
void main()
{
	int a[50], i, mx, mn, n;
        printf("Input the number of elements to be stored in the array :");
        scanf("%d",&n);
        printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++)
     	{	
		printf("element - %d : ",i);	      			scanf("%d",&a[i]);
        }
        mx = a[0];
        mn = a[0];
       for(i=1; i<n; i++)
       {
		if(a[i]>mx)
                {
			mx = a[i];
  	        }
      		if(a[i]<mn)
        	{
            		mn = a[i];
        	}
    	}
    	printf("Maximum element is : %d\n",mx);
    	printf("Minimum element is : %d\n",mn);
}

