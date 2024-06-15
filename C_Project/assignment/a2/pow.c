#include<stdio.h>
//#include<conio.h>
int main()
{
      int c,n,y=1,x;
      printf("enter the number\n");
      scanf("%d",&n);
      printf("enter the power\n");
      scanf("%d",&x);
      for(c=1;c<=x;c++)
      {
         y=y*n;
      }
      printf("%d^%d=%d",n,x,y);
}
