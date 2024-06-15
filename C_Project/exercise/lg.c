#include<stdio.h>
int main()
{
	int i,c=0; 
	char a[10];
	for(i=0;i<7;i++)
		scanf(" %c",a+i);	
	for(i=0;i<7;i++)
		printf("%c ",a[i]);
	printf("\n");
	for(i=0;i<7;i++)
	{
		if((i!=0)&&(i!=6)&&(i%2==0))
		{
			if(a[i]=='B')
				c++;		
		}
		else if(i==5)
		{
			if(a[i]=='B')	
				c++;
		}		
		else
			c++;	
	}
	printf("%d\n",c);
}
