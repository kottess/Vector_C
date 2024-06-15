//swap string
#include<stdio.h>
int main()
{
char a[30],b[30],c[30];
int i;
printf("Enter two strings\n");
scanf("%s %s",a,b);
printf("before swapping\n%s %s\n",a,b);
for(i=0;c[i]=a[i];i++);
for(i=0;a[i]=b[i];i++);
for(i=0;b[i]=c[i];i++);
printf("after swapping\n%s %s\n",a,b);

}
