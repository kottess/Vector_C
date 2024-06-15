#include<stdio.h>
int main()
{
int x,y,z,b;
printf("Enter the values:");
scanf("%d%d%d",&x,&y,&z);
b=x>y?(x>z?x:z):(y>z?y:z);
b=(x==y)?(x>z)?x:z:b;
b=(x==z)?(z>y)?z:y:b;
b=(z==y)?(y>x)?y:x:b;
(x==y)&&(x==z)?printf("All are same\n"):printf("%d is greater\n",b);
}
