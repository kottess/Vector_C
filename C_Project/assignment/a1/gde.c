#include<stdio.h>
int main()
{
float s1,s2,s3,s4,s5,total,per;
char grade;
printf("enter the marks:");
scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
total=s1+s2+s3+s4+s5;
per=total/5;
if(per>=90)
grade='S';
else if(per >= 80 && per <= 89)
grade='A';
else if(per >= 60 && per <= 79)
grade='B';
else if(per >= 50 && per <= 59)
grade='C';
else if(per >= 40 && per <= 49)
grade='D';
else 
grade='E';
printf("Percentage is %.2f\n Grade is %c\n",per,grade);
}
