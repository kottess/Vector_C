#include<stdio.h>
int main()
{
char a[50]; 		 
int i,j,n,c;		
printf("Enter the string\n");
scanf("%s",a);
for(n=0;a[n];n++);
for(i=0; i<n; i++)
{
for(j=0; j<i; j++)
{
if(a[i]==a[j])
break;
}
if(j!=i)
continue;
for(j=i+1,c=1;j<n;j++)
{
if(a[i]==a[j])
c++;
}
printf(" %c is occur %d times \n",a[i],c);
}	
}
