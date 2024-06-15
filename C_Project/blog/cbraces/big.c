#include <stdio.h>
int main()
{
int i, limit, num, temp = 0;
printf("Enter the limit : ");
scanf("%d",&limit);
printf("\nEnter %d numbers\n",limit);
for(i=0; i < limit; i++)
{
printf("\nEnter number %d :",i+1);
scanf("%d",&num);
if(num > temp)
temp = num;
}
printf("The biggest number is %d\n",temp);
}
