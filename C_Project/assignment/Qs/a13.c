#include<stdio.h>
int main()
{
char a[30];
int i,j=0,n;
printf("Enter the string\n");
scanf("%s",a);
for(n=0;a[n];n++);
for(i=1; i <n; i++)
    {
        while((a[i]==a[j])&&j>=0)
        {
            i++;
            j--;
        }
          
        a[++j] = a[i];
    }
    a[j+1]='\0'; 
printf("%s\n",a);
}
