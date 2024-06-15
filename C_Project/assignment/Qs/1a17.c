#include <stdio.h>
int main()
{
int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char* day[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday","Sunday"};   
int d, m, y, i; 

printf("Fill in a date as dd-mm-yyyy: ");
scanf("%d-%d-%d",  &d, &m, &y);

if(y%4==0&&(y%100!=0||y%400==0))
	month[1]=29;

if(m<1||m>12||d<1||d>month[m-1])
{
	printf("This is an invalid date.\n");
        return 1;
}
d=(d + ((153 * (m + 12 * ((14 - m) / 12) - 3) + 2) / 5) 
        + (365 * (y + 4800 - ((14 - m) / 12)))              
        + ((y + 4800 - ((14 - m) / 12)) / 4)                
        - ((y + 4800 - ((14 - m) / 12)) / 100)              
        + ((y + 4800 - ((14 - m) / 12)) / 400)              
        - 32045)%7;

printf("This is a %s.\n", day[d]);
}
