#include<stdio.h>
int main()
{
struct st
{
char ch,ch1;
int x,x1;
float f,f1;
char a[20],a1[20];
}v;
FILE *fp = fopen("data.txt","r");
fread(&v,sizeof(struct st),1,fp); //reads all types of data into structure.
printf("v.ch = %c\n",v.ch);
printf("v.x = %d\n",v.x);
printf("v.f = %f\n",v.f);
printf("v.a = %s\n",v.a);
printf("v.ch1 = %c\n",v.ch1);
printf("v.x1 = %d\n",v.x1);
printf("v.f1 = %f\n",v.f1);
printf("v.a1 = %s\n",v.a1);

}
