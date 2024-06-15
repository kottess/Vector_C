#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<string.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage:./a.out port\n");
		return 0;
	}
	int sfd,n,c;
	char wrbuf[128];
	struct sockaddr_in cln;
	sfd=socket(AF_INET,SOCK_STREAM,0);
	if(sfd<0)
	{
		perror("socket");
		return 0;	
	}
	printf("socket created successfully\n");
	cln.sin_family=AF_INET;
	cln.sin_port=htons(atoi(argv[1]));
	cln.sin_addr.s_addr=inet_addr("127.0.0.1");
	
	if(connect(sfd,(struct sockaddr *)&cln,sizeof(cln))==0)
		printf("connection established successfully\n");	
	else
	{
		perror("connect");
		return 0;
	}
	printf("Enter the data:");
	gets(wrbuf);
	write(sfd,wrbuf,strlen(wrbuf)+1);
	sleep(2);
	read(sfd,&n,4);
	read(sfd,&c,4);
	printf("No of integers: %d, No of chars: %d\n",n,c);	
}
