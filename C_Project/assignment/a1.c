#include<stdio.h>
#include<string.h>
int main()
	  {
		    char str1[50]="abc", str2[50];
		    strcpy(str2, strrev(str1));
		    printf("Reverse string is : %s",str2);
		    return 0;
	  }
