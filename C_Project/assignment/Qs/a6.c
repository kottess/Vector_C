#include <stdio.h>
int main()
{
char str[100],res;
int i,n,max1=0,max2=0;
int freq[256]={0}; 

printf("Enter any String:  ");
scanf("%[^\n]",str);
for(n=0;str[n];n++);
for(i = 0; i < n; i++)
{
	freq[str[i]]++;
}
		
for(i = 0; i < n; i++)
{
	if(str[i] > str[max1]) 
	{
		max2 = max1;
		max1 = i;
	}
	else if(str[i] > str[max2] && str[i] != str[max1])
	{
		max2 = i;
	}
}	
printf("The second maximum Occurring Character in a Given String = %c\n",str[max2]);
return 0;
}
