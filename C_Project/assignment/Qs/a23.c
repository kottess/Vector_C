#include<stdio.h>
struct company
{
char name[50];
char address[100];
int phone;
int noOfEmployee;
}; 

int main()
{
int i,n;
struct company c[3];
printf("Enter the company name ,address, phone no,no of employees\n");

for(i=0;i<3;i++)
{
printf("Enter company %d details\n",i+1);
scanf("%s %s %d %d",c[i].name,c[i].address,&c[i].phone,&c[i].noOfEmployee);
}

printf("Company details\n");
for(i=0;i<3;i++)
	printf(" %s %s %d %d\n",c[i].name,c[i].address,c[i].phone,c[i].noOfEmployee);
}
