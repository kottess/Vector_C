#include <stdio.h>
void swap(int*, int*); //function declaration
void main()
{
	int x=10, y=20;
	printf("Before Swapping\nx = %d y = %d\n", x, y);
	swap(&x, &y); //function call
	printf("After Swapping\nx = %d y = %d\n", x, y);
}                                   
//function definition
void swap(int *ptr1, int *ptr2)
{
	int temp;
	temp = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;
}

