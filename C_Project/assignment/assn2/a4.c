#include<stdio.h>
int main()
{
char m[40],s[40];
int n,n1,i,j,c=0,f;
printf("Enter the string\n");
scanf("%[^\n]",m);
printf("Enter the sub-string\n");
scanf("%s",s);

for(n=0;m[n];n++);
for(n1=0;s[n1];n1++);

for(i=0;i<=n-n1;i++)
{
	f=1;
	for(j=0;j<n1;j++)
	{
		if(m[i+j]!=s[j])
		{
		f=0;
		break;
		}
	}

	if(f==1)
	c++;
}
printf("substring present %d times\n",c);
}
