#include<stdio.h>
char* rev_str(char*,int,int);
int main()
{
char s[10]; int n;
printf("Enter the string\n");
scanf("%s",s);
for(n=0;s[n];n++);
char* r=rev_str(s,0,n-1);
printf("%s\n",r);
}
char* rev_str(char *s,int i,int j)
{
char temp;
if(i<j)
{
temp=s[j];
s[j]=s[i];
s[i]=temp;
i++;j--;
return rev_str(s,i,j);
}
else
return s;
}
