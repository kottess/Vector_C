#include <stdio.h>
void main()
{
	int a1[10], a2[10], a3[10], i, j=0, k=0, n;
        printf("Input the number of elements to be stored in the array :\n");
        scanf("%d",&n);
        printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++)
        {
		printf("element - %d : ",i);
		scanf("%d",&a1[i]);
	}
        for(i=0;i<n;i++)
        {
		if (a1[i]%2 == 0)
			a2[j++] = a1[i];
	 	else
			a3[k++] = a1[i];
	}
	printf("The Even elements are :\n");
        for(i=0;i<j;i++)
		printf("%2d",a2[i]);
        printf("\nThe Odd elements are :\n");
    	for(i=0;i<k;i++)
  		printf("%2d",a3[i]);
        printf("\n");	
}

