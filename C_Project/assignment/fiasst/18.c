#include<stdio.h>
int main()
{
	char arr[50];
	int i,j,k;
	printf("Enter the string\n");
	scanf("%[^\n]",arr);	
	for(i=0;arr[i];i++)
	{
		for(j=i+1;arr[j];j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;arr[k];k++)
					arr[k]=arr[k+1];
			j--;
			}
		}	
	}
	printf("After removing extra occurence of character\n%s\n",arr);
}
