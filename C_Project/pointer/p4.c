//To display float binary using int & char pointer
#include<stdio.h>
int main()
{
int i,j;
float f;
printf("Enter the real number\n");
scanf("%f",&f);

int *p=(int *)&f;
for(i=31;i>=0;i--)
{
printf("%d",*p>>i&1);
if(i%8==0)
printf(" ");
}
printf("\n");

char *c=(char *)&f;
c=c+3;
for(i=0;i<4;i++)
{
for(j=7;j>=0;j--)
printf("%d",*c>>j&1);
printf(" ");
c--;
}
printf("\n");
}
