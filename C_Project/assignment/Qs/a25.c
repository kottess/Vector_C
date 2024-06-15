#include<stdio.h>
struct BCT
{
char name[20],address[50];
int roll_no,age,avg;
};

void input(struct BCT *s)
{
static int c=0;
printf("Enter student-%d details name,address,roll no,age,avg\n",++c);
scanf("%s %s %d %d %d",s->name,s->address,&(s->roll_no),&(s->age),&(s->avg));
}

void display(struct BCT *s)
{
static int n=0;
printf("Enter student-%d details name,address,roll no,age,avg\n",++n);
printf("Name: %s\n",s->name);
printf("address: %s\n",s->address);
printf("roll no: %d\n",s->roll_no);
printf("age: %d\n",s->age);
printf("average: %d\n"s->avg);
}

int main()
{
int i;
struct BCT s[5];
printf("Enter 5 student details\n");
for(i=0;i<5;i++)
input(&s[i]);
for(i=0;i<5;i++)
display(&s[i]);
}
