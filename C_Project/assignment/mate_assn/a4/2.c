#include<stdio.h>
#include<math.h>
int main()
{
	printf("Armstrong number 1 to 500\n");
	int i,t,t1,c;
	for(i=1;i<500;i++)
	{
		t=t1=i;c=0;
		while(t!=0)
		{
			t=t/10;
			c++;
		}
		int r,s=0,p;
		while(t1!=0)
		{
			r=t1%10;
			p=pow(r,c);
			s+=p;
			t1=t1/10;
		}
		if(i==s)
			printf("%d ",i);	
	}

	printf("\n");
}
