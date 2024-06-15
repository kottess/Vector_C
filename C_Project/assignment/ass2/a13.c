#include<stdio.h>
float atof(char *);
int main(int argc,char *argv[])
{
if(argc!=2)
{
printf("usage: ./a.out float\n");
return 0;
}
float x=atof(argv[1]);
printf("%f\n",x);
}
float atof(char *p)
{
int i,s1=0;
float s2=0,f=0.1;
if(p[0]=='-')
i=1;
else
i=0;
for(;p[i]&&p[i]!='.';i++)
{
if(p[i]>='0'&&p[i]<='9')
s1=s1*10+(p[i]-48);
else
break;
}
for(i++;p[i];i++,f*=0.1)
{
if(p[i]>='0'&&p[i]<='9')
s2=s2+f*(p[i]-48);
else
break;
}
if(p[0]=='-')
return -(s1+s2);
else
return s1+s2;
}
