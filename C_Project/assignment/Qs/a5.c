#include<stdio.h>  
#include<string.h>  
int main()  
{  
char a[30],b[30];
printf("Enter two strings\n");
scanf("%s%s",a,b);
  
if(strlen(a) != strlen(b))
	printf("Second string is not a rotation of first string\n");  
else
	{  
	strcat(a,a);  
	if(strstr(a,b))  
	printf("Second string is a rotation of first string\n");  
	else  
	printf("Second string is not a rotation of first string\n");  
	}  
}  
