#include<stdio.h>
void decryptor(char *,int);
int main()
{
char a[50];
int n;
printf("Enter the string\n");
scanf("%[^\n]",a);
printf("Enter the key\n");
scanf("%d",&n);
decryptor(a,n);
}

void decryptor(char *a,int n)
{
char temp;
int i,l,j,k;
for(i=0,k=0;a[i];i++)
{
	if((a[i]!=' ')&&(a[i]!='.'))
	k++;
		if((k!=0)&&(k%n==0))
		{
			if((a[i]=='\0')||(a[i+1]=='\0'))
			break;
			if(a[i+1]==' ')
			{
			j=i+1;
			if(a[j]==' ')
				{
				while(a[j]==' ')
				j++;
				}
			}

		else
		j=i+1;

		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j=0;
		}
}
printf("%s\n",a);
}

