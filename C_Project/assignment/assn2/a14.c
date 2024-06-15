#include<stdio.h>
void fun(int a, int b, int *sum, int *sub, int *mul);
 
int main()
{
    int x,y,sum,sub,mul;
    printf("Enter two number\n");
    scanf("%d%d",&x,&y);
    fun(x,y,&sum,&sub,&mul);
 
    printf("Sum=%d\n",sum);
    printf("Sub=%d\n",sub);
    printf("Mul=%d\n",mul);
    return 0;
}
 
void fun(int a,int b,int *sum,int *sub,int *mul)
{
    *sum = a+b;
    *sub = a-b;
    *mul = a*b;
}
