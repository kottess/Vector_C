#include<stdio.h>
int main()
{
	char arr[50],ch;
	int i,j,k=0;
	printf("Enter the string\n");
	scanf("%[^\n]",arr);
	printf("Enter the character\n");
	scanf(" %s",&ch);	
	for(i=0;arr[i];i++)
	{
		if(arr[i]==ch)
		{
			k++;
			if(k==1)
				continue;
			else
			{		
				for(j=i;arr[j];j++)
					arr[j]=arr[j+1];
				i--;
			}
		}
	}
	printf("After removing extra occurence of character %c\n%s\n",ch,arr);
}
