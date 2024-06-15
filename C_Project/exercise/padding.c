#include <stdio.h>
int main()
{
	char text1[]="includehelp";
	char text2[]="includehelp.com";
	char text3[]="http://www.includehelp.com";

	printf("\nWithout padding:");
	printf("\ntext1:%s \ntext2:%s \ntext3:%s \n",text1,text2,text3);

	printf("\nWith left space padding:");
	printf("\ntext1:%30s \ntext2:%30s \ntext3:%30s \n",text1,text2,text3);

	printf("\nWith right space padding:");
	printf("\ntext1:%-30s \ntext2:%-30s \ntext3:%-30s \n",text1,text2,text3);

	return 0;
}

