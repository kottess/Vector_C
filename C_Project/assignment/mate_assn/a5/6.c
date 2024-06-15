#include<stdio.h>
int main()
{
	int a[30],i,p=0,n=0,e=0,o=0;
	printf("Enter 25 numbers\n");
	for(i=0;i<25;i++)
		scanf("%d",a+i);
	for(i=0;i<25;i++)
	{
		if(a[i]%2==0)
			e++;
		if(a[i]%2!=0)
			o++;
		if(a[i]<0)
			n++;
		if(a[i]>0)
			p++;	      
			
	}
	printf("+ve-> %d, -ve-> %d, even-> %d, odd-> %d\n",p,n,e,o);	
}
