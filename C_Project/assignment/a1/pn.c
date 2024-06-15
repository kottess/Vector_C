#include<stdio.h>
int main()
{
int x;
printf("Enter the value:");
scanf("%d",&x);
if(x&(1<<31))
printf("%d is negative\n",x);
else
printf("%d is positive\n",x);
(x&(1<<31))?printf("%d is negative\n",x):printf("%d is positive\n",x);
(x>0)?printf("%d is positive\n",x):printf("%d is negative\n",x);
}
