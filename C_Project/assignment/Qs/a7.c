#include <stdio.h>
int main()
{
char str[100],res;
int i,n,max = 0;
int freq[256] = {0}; 

printf("Enter any String:  ");
scanf("%[^\n]",str);

for(n=0;str[n];n++);

for(i = 0; i < n; i++)
{
	freq[str[i]]++;
}
for(i = 0; i < n; i++)
{
	if(max < freq[str[i]])
	{
		max = freq[str[i]];
		res = str[i];
	}
}
printf("The Maximum Occurring Character in a Given String = %c\n",res);
}
