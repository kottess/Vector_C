#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	if(fork()==0)
	{
		execl("/bin/ls","ls",NULL);
		//system("ls");
		while(1);	
	}
	else
	{
		execl("/bin/pwd","pwd",NULL);
		//system("pwd");
		while(1);
	}
}
