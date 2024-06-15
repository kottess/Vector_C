#include <stdio.h>
int max_ch(char *);
int main()
{
char str[100],res;
printf("Enter any String:  ");
scanf("%[^\n]",str);
res=max_ch(str);
printf("The Maximum Occurring Character in a Given String = %c\n",res);
}

int max_ch(char *p)
{
int i,n,max = 0;
int freq[256] = {0}; 
char res;
for(n=0;p[n];n++);
  	for(i = 0; i < n; i++)
  	{
  		freq[p[i]]++;
	}
	
		for(i = 0; i < n; i++)
  	{
		if(max < freq[p[i]])
		{
			max = freq[p[i]];
			res = p[i];
		}
	}
return res;
}
