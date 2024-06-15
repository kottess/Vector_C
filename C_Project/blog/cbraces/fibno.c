#include <stdio.h>
int main()
{
int a = 0, b = 1, c, i, num;
printf("Enter a number: ");
scanf("%d",&num);
if(num < 1)
{
printf("\nInvalid inuput ");
}
else if(num > 1)
{
printf("\t %d \n\t %d ", a, b);
for(i = 3;i <= num;i++)
{
c = a + b;
a = b;
b = c;
printf("\n\t %d ", c);
}
}
else
printf("%d ", a);
return 0;
}
