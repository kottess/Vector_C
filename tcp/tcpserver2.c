#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<strings.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage:./a.out port\n");
		return 0;
	}
	int sfd,nsfd,i=0,j=0,p1,p2,r;
	char rdbuf[128],op1[100],op2[100],sm;
	struct sockaddr_in srv,cln;
	sfd=socket(AF_INET,SOCK_STREAM,0);
	if(sfd<0)
	{
		perror("socket");
		return 0;	
	}
	printf("socket created successfully\n");
	srv.sin_family=AF_INET;
	srv.sin_port=htons(atoi(argv[1]));
	srv.sin_addr.s_addr=inet_addr("0.0.0.0");
	if((bind(sfd,(struct sockaddr *)&srv,sizeof(srv))==0))
		printf("Bind successfull\n");
	else
	{
		perror("bind");
		return 0;
	}
	listen(sfd,1);
	int len=sizeof(cln);
	printf("waiting for incoming connection\n");
	nsfd=accept(sfd,(struct sockaddr *)&cln,&len);
	if(nsfd<0)
	{
		perror("accept");
		return 0;
	}
	printf("new connection accepted\n");
	bzero(rdbuf,128);
	if((read(nsfd,rdbuf,128))==0)
	{
		printf("client terminated\n");
		exit(0);	
	}
	while(rdbuf[i])
	{
		op1[j++]=rdbuf[i++];			
		if((rdbuf[i]=='+')||(rdbuf[i]=='-')||(rdbuf[i]=='*')||(rdbuf[i]=='/'))
			break;
	}
	op1[j]='\0';
	sm=rdbuf[i++];
	j=0;	
	while(rdbuf[i]!='\0')
	{
		op2[j++]=rdbuf[i++];
	}
	op2[j]='\0';
	switch(sm)
	{
		case '+': r=atoi(op1)+atoi(op2); break;
		case '-': r=atoi(op1)-atoi(op2); break;
		case '*': r=atoi(op1)*atoi(op2); break;
		case '/': r=atoi(op1)/atoi(op2); break;	
	}
	write(nsfd,&r,4);
}
