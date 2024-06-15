#include<stdio.h>
int main()
{
      int n,i=1,count=0;
      printf("Enter the Number:");
      scanf("%d",&n);
      while(i<=n)
      {
            if(n%i==0)
            count++;
            i++;
      }
      if(count==2)
            printf("\n%d is Prime Number",n);
      else
            printf("\n%d is Not Prime Number",n);
      return 0;
}
