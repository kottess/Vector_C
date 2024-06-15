#include<stdio.h>
struct student
{
char name[20];
int roll;
float marks;
struct student *p;
};

void main()
{
int n,i;
printf("Enter number of students\n");
scanf("%d",&n);
struct student s[n];
printf("Enter student details-- name,roll no,marks\n");

for(i=0;i<n;i++)
{
	s[i].p=&s[i];
	scanf("%s %d %f",(s[i].p)->name,&(s[i].p)->roll,&(s[i].p)->marks);
}

printf("student details:\n");
for(i=0;i<n;i++)
{
	printf("%s\n",(s[i].p)->name,);
	printf("%d\n"(s[i].p)->roll);
	printf("%f\n",(s[i].p)->marks);
}
}
