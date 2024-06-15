#include <stdio.h>
int main()
{
int num1, num2, choice;
printf("Enter any two integers : ");
scanf("%d %d ", &num1, &num2);

printf("\nPress 1 for Addition ");
printf("\nPress 2 for Subtraction ");
printf("\nPress 3 for Multiplication ");
printf("\nPress 4 for Division ");
printf("\nPress other key to exit ");
printf("\n\n");
printf("\nEnter ur choice : ");
scanf("%d" ,&choice);

switch(choice)
{
case 1:
printf("\n%d + %d = %d ", num1, num2, num1 + num2);
break;

case 2:
printf("\n%d - %d = %d ", num1, num2, num1 - num2);
break;

case 3:
printf("\n%d * %d = %d ", num1, num2, num1 * num2);
break;

case 4:
printf("\n%d / %d = %d ", num1, num2, num1 / num2);
break;

default:
printf("\nInvalid Choice ");
}
return 0;
}
