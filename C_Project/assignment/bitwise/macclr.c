#include <stdio.h>
#define CLR(num,pos) (num &= ~(1<<pos))

int main(){
	int M,N,i;
	printf("Enter the number\n");
	scanf("%d",&M);
	printf("Enter the position\n");
	scanf("%d",&N);
	for(i=31;i>=0;i--)
	printf("%d",M>>i&1);
	printf("\n");	
	CLR(M,N);
	printf("After clearing bit %d, num = %d\n", N, M);	

	for(i=31;i>=0;i--)
	printf("%d",M>>i&1);
	printf("\n");	
	return 0;	
}

