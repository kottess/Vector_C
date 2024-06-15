#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include <unistd.h>
int main()
{
	int t1,t2,t3;
	if(fork()==0)
	{
		srand(getpid());
		t1=rand()%10+1;
		printf("child1 delayed with %d sec\n",t1);
		sleep(t1);
		exit(1);	
	}
	else
	{
		if(fork()==0)
		{
			srand(getpid());
			t2=rand()%10+1;
			printf("child2 delayed with %d sec\n",t2);
			sleep(t2);
			exit(2);	
		}
		else
		{
			if(fork()==0)
			{
				srand(getpid());
				t3=rand()%10+1;
				printf("child3 delayed with %d sec\n",t3);
				sleep(t3);
				exit(3);	
			}
			else
			{
				int stat,ret;
				while((ret=wait(&stat))!=-1)
				{
					stat=stat>>8;
					if(stat==1)
						printf("child1 terminated\n");
					if(stat==2)
						printf("child2 terminated\n");
					if(stat==3)
						printf("child3 terminated\n");	
				}
			}	
		}
	}		
}
