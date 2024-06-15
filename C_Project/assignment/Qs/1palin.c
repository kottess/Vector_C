#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,j,n,c;
printf("Enter the string\n");
scanf("%[^\n]",a);

for(n=0;a[n];n++);
c=n;
c/=2;

if(n%2==0)
i=c-1,j=c;
else
i=c-1,j=c+1;

for(i,j;a[j];i--,j++)
{
if(a[i]!=a[j])
break;
}
i+=1;
j-=1;
printf("The longest palindrome\n");
for(i;i<=j;i++)
	printf("%c",a[i]);
printf("\n");
}
