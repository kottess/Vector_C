#include<stdio.h>
int main()
{
char a[40];
int i;
printf("Enter the string\n");
scanf("%s",a);
for(i=0;a[i];i++)
{
if((a[i]>='a')&&(a[i]<='z'))
a[i]-=32;
else if((a[i]>='A')&&(a[i]<='Z'))
a[i]+=32;
}
printf("%s\n",a);

}
