#include<stdio.h>
int main()
{
int res=10;
if(res>>2&&res<<2)
{
res=100;
if(res>100){
printf("%d",res);
}else
printf("error");
}printf("%d ",res>>2&&res<<2);
printf("%d %d",res>>2,res<<2);
}
