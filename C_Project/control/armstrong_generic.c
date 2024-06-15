#include<stdio.h>
#include<math.h>
int main()
{
	int l,n,t,t1,s,c,r,p;
	for(n=370,l=0;;n++)
	{
		for(t=t1=n,s=0,c=0;t!=0;c++)
	    {
		    t/=10;
	    }
	    while(t1!=0)
	    {
	        r=t1%10;
	        p=pow(r,c);
	        s=s+p;
	        t1/=10;
	    }
		if(s==n)
		{
			l++;
			printf("%d ",n);
		}
		if(l==5)
			break;
	}
	printf("\n");
}
