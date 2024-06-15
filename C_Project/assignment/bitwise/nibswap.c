#include<stdio.h>
#define swap(num) ( (num & 0x0F)<<4 | (num & 0xF0)>>4 ) 
int main()
{
int i,j,n;
printf("Enter Number\n");
scanf("%x",&n);
for(i=31;i>=0;i--)
{
printf("%d",n >> i & 1);
if(i%8==0)
printf(" ");
}
printf("\n"); 

swap(n);

for(i=31;i>=0;i--)
{
printf("%d",n >> i & 1);
if(i%8==0)
printf(" ");
}
printf("\n");
printf("%x\n",n);
}
