#include<stdio.h>
#include<stdarg.h>
int c;
int my_printf(const char *,...);
void print_string(char *);
int main()
{
int i=10;
char s[10]="great";
my_printf("hello\n");
int r=my_printf("%d %s\n",i,s);
printf("%d\n",r);
}

int my_printf(const char *p,...)
{
int i,x;
float f;
char ch,a[20],*ptr;
va_list ap;
va_start(ap,p);
c=0;
for(i=0;p[i];i++)
{
	if(p[i]=='%')
	{
		i++;
		if(p[i]=='d')
		{ 
			x=va_arg(ap,int);
			sprintf(a,"%d",x);
			print_string(a);
		}

		if(p[i]=='c')
		{ 
			ch=va_arg(ap,int);
			sprintf(a,"%c",ch);
			print_string(a);

		}
		if(p[i]=='f')
		{	 		
			f=va_arg(ap,double);
			sprintf(a,"%f",f);
			print_string(a);
		}

		if(p[i]=='s')
		{ 
			ptr=va_arg(ap,char*);
			print_string(ptr);
		}
	}
	else
	{
		putchar(p[i]);
		c++;
	}
}
return c;
}

void print_string(char *p)
{
int i;
for(i=0;p[i];i++)
{
	putchar(p[i]);
	c++;
}
}


