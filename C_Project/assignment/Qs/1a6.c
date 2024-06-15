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
	max1=max2=0;

	for(i = 0; i < n; i++)
  	{
		if(max1 < freq[str[i]]) 
		{
			max2 = max1;
			max1 =i;
		}
		else if((max2 < freq[str[i]])&&(freq[str[i]]!=max1))
		{
			max2 =i;
		}
	}	
printf("The second maximum Occurring Character in a Given String =%c\n",str[max2]);
return 0;
}
