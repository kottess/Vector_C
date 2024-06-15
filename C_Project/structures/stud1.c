#include<stdio.h>
struct student 
{
int roll;
char name[20];
float marks;
};
void sort(struct student *,int);
void display(struct student*);
void setdata(struct student*);
int main()
{
struct student s[5];
setdata(s);
sort(s,5);
display(s);
}
void setdata(struct student *p)
{
int i;
printf("Enter the student records\n");
for(i=0;i<5;i++)
scanf("%d%s%f",&p[i].roll,p[i].name,&p[i].marks);
}
void sort(struct student *p,int n)
{
int i,j;
struct student temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(p[j].roll>p[j+1].roll)
{
temp=p[j];
p[j]=p[j+1];
p[j+1]=temp;
}
}
}
}
void display(struct student *p)
{
int i;
printf("After sorting\n");
for(i=0;i<5;i++)
printf("%d %s %f\n",p[i].roll,p[i].name,p[i].marks);
}

