#include<stdio.h>
int main()
{
	int a[50],f[50],n,i,j,c;
	printf("Input the number of elements to be stored in the array :");
        scanf("%d",&n);
        printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++)
     	{	
		printf("element - %d : ",i);	      			scanf("%d",&a[i]);
		f[i]=-1;        
	}
	for(i=0;i<n-1;i++)
	{
		c=1;		
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				f[j]=0;	
			}
		}

		if(f[i]!=0)
			f[i]=c;	
	}	
	for(i=0;i<n;i++)
	{
		if(f[i]!=0)
		printf("%d occurs %d times\n",a[i],f[i]);
	}

}
