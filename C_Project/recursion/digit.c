#include <stdio.h>
int digit(int ,int);
int main()
{
    int n;
    printf("Enter any number to print in words: ");
    scanf("%d", &n);
    int num=digit(n,0);
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        num = num / 10;
    }
    return 0;
}
int digit(int n,int num)
{
if(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
 	return digit(n,num); 
  }
return num;
}

