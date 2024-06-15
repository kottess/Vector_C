w3#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,f,j,l,k,k1=0,pos,len;
printf("Enter the string\n");
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i++)
{
	for(j=len-1;i<j;j--)
	{
		if(a[i]==a[j])
		{
			f=i;
			l=j;
			k=0;
			while(f<l)
			{
				if(a[f]!=a[l])
				break;
				else
				{
					f++;
					l--;
					k+=2;
				}
			}
			if(f<l)
			{
				continue;
			}
			if(f==l)
			{
				k+=1;
			}
			if((k1<k)&&(f>=l))
			{
				k1=k;
				pos=i;
			}
		}
	}
}
for(i=pos;k1!=0;k1--,i++)
	printf("%c",a[i]);
printf("\n");
}












