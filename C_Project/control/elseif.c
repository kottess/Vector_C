#include<stdio.h>
int main()
{
	char c;
	printf("Enter any char\n");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
		printf("%c vowels\n",c);
	else if(c>='a'&&c<='z')
		printf("%c consonants\n",c);
	else
		printf("%c special char\n",c);
}
