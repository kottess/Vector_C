#include<stdio.h>
#include<dlfcn.h>
int sum(int,int);
int mul(int,int);
int main()
{
	int a,b,op,res; void *handler;
	int (*ptr)(int,int);
	printf("Enter two number\n");
	scanf("%d%d",&a,&b);
	printf("Enter option for 1-sum 2-mul\n");
	scanf("%d",&op);
	if(op==1)
	{
		handler=dlopen("libdynamic.so",RTLD_LAZY);
		if(handler==NULL)
		{
			printf("Error msg :%s\n",dlerror());
			return 0;
		}
		ptr=dlsym(handler,"sum");
		if(ptr==NULL)
		{
			printf("Error msg: %s\n",dlerror());
			return 0;
		}
		res=(*ptr)(a,b);
		printf("sum= %d\n",res);
		dlclose(handler);
	}
	else if(op==2)
	{
		handler=dlopen("libdynamic.so",RTLD_LAZY);
		if(handler==NULL)
		{
			printf("Error msg :%s\n",dlerror());
			return 0;
		}
		ptr=dlsym(handler,"mul");
		if(ptr==NULL)
		{
			printf("Error msg: %s\n",dlerror());
			return 0;
		}
		res=(*ptr)(a,b);
		printf("mul= %d\n",res);
		dlclose(handler);
	}
	else
	{
		printf("Invaild option\n");
		return 0;	
	}
}
