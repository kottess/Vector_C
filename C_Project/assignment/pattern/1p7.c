#include<stdio.h>
int main()
{
  int i,j,k,n,x,y;
printf("Enter the n value:");
scanf("%d",&n);  
for(i=1;i<=n;i++)
  {
     for(j=1,x=2,y=1;j<=i;j++,x+=2,y+=2)
    {
if(i%2==0)
printf("%d ",x);
else
printf("%d ",y);
    }
    printf("\n");
  }
  return 0;
}
