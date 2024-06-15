#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<arpa/inet.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage:./a.out port\n");
		return 0;
	}
	int sfd;
	char wrbuf[128];
	struct sockaddr_in cln;
	sfd=socket(AF_INET,SOCK_DGRAM,0);
	if(sfd<0)
	{
		perror("socket");
		return 0;	
	}
	printf("socket created successfully\n");
	cln.sin_family=AF_INET;
	cln.sin_port=htons(atoi(argv[1]));
	cln.sin_addr.s_addr=inet_addr("127.0.0.1");
	while(1)
	{
		printf("Enter the data:");
		gets(wrbuf);
		sendto(sfd,wrbuf,128,0,(struct sockaddr *)&cln,sizeof(cln));
	}
}	
