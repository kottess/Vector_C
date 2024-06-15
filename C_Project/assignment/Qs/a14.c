#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50],str3[100][100],str4[100][100],str5[100][100],t[100];
int i,j=0,k=0,l=0,m,index=0;
printf("Enter 1st string\n");
scanf("%[^\n]",str1);
printf("Enter 2nd string\n");
scanf(" %[^\n]",str2);

for(i=0;str1[i];i++)
{
	if(str1[i]==' ')
	{
		str3[j][k]='\0';
		j++;
		k=0;
	}
	else
	{
		str3[j][k]=str1[i];
		k++;
	}
	str3[j][k]='\0';
}
k=0;

for(i=0;str2[i];i++)
{
	if(str2[i]==' ')
	{
		str4[l][k]='\0';
		l++;
		k=0;
	}
	else
	{
		str4[l][k]=str2[i];
		k++;
	}
	str4[l][k]='\0';
}

for(i=0;i<=j;i++)
{
	for(m=0;m<=l;m++)
	{
		strcpy(t,str3[i]);
		strcat(t,str4[m]);
		strcpy(str5[index],t);
		index++;
	}
}

for(i=0;i<=l;i++)		
{
	for(m=0;m<=j;m++)
	{
		strcpy(t,str4[m]);
		strcat(t,str3[i]);
		strcpy(str5[index],t);
		index++;
	}
}

for(i=0;i<=index;i++)
{
	for(j=i+1;j<=index;j++)
	{
		if(strcmp(str5[i],str5[j])==0)
		{
			for(k=j;k<=index;k++)
				strcpy(str5[k],str5[k+1]);
				index--;
		}
	}
}
printf("\nCombination of strings\n");
for(i=0;i<=index;i++)
	printf("%s\n",str5[i]);
}
