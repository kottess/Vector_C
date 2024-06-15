#include <stdio.h>
int main( )
{
	int n,i,n1 ;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("Little Endian format\n");
	for(i=31;i>=0;i--)
		{
		printf("%d",n>>i&1);
		if(i%8==0)
		printf(" ");
		}
	printf("\n");
	n1=(((n>>24) & 0x000000ff) | ((n>>8) & 0x0000ff00) | ((n<<8) & 0x00ff0000) | ((n<<24) & 0xff000000));

	printf("Big Endian format\n");
	for(i=31;i>=0;i--)
		{
		printf("%d",n1>>i&1);
		if(i%8==0)
		printf(" ");
		}
	printf("\n");
}
