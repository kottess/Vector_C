#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include <unistd.h>
int pid[3];
int main()
{
	int t1,t2,t3;
	if((pid[0]=fork())==0)
	{
		srand(getpid());
		t1=rand()%10+1;
		printf("child1 delayed with %d sec\n",t1);
		sleep(t1);
		//exit(0);	
	}
	else
	{
		if((pid[1]=fork())==0)
		{
			srand(getpid());
			t2=rand()%10+1;
			printf("child2 delayed with %d sec\n",t2);
			sleep(t2);
			//exit(0);	
		}
		else
		{
			if((pid[2]=fork())==0)
			{
				srand(getpid());
				t3=rand()%10+1;
				printf("child3 delayed with %d sec\n",t3);
				sleep(t3);
				//exit(0);	
			}
			else
			{
				int ret;
				while((ret=wait(0))!=-1)
				{
					if(ret==pid[0])
						printf("child1 terminated\n");
					if(ret==pid[1])
						printf("child2 terminated\n");
					if(ret==pid[2])
						printf("child3 terminated\n");	
				}
			}	
		}
	}		
}
