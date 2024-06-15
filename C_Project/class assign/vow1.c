#include<stdio.h>
int main()
{
char a[10];
int i,v=0,c=0,d=0,s=0;
printf("enter the character:");
for(i=0;i<10;i++)
scanf(" %c",a+i);

for(i=0;i<10;i++)
printf("%c ",a[i]);
printf("\n");

for(i=0;i<10;i++)
{

if(a[i]>='0' && a[i]<='9')
d++; 

else if(a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o' ||a[i]=='u'|| a[i]=='A'|| a[i]=='E' || a[i]=='I'|| a[i]=='O' || a[i]=='U')
v++;

else if((a[i]>='b' && a[i]<='z')|| (a[i]>='B' && a[i]<='Z'))
c++;

else   
s++;


}
printf("vowels=%d\n",v);
printf("consonants=%d\n",c);
printf("Digits=%d\n",d);
printf("special character=%d\n",s);

}
