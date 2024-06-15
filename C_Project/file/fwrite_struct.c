#include<stdio.h>
int main()
{
struct st
{
char ch,ch1;
int x,x1;
float f,f1;
char a[20],a1[20];
} ;
struct st v={'A','B',1234,2341,525.5,22.7,"hey","vector"};
//struct st v1={'B',4321,22.7,"Vector"};

FILE *fp=fopen("data.txt","w");
fwrite(&v,sizeof(struct st),1,fp);
}

